#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define DENS(t, y, x) dens[(t) * ny * nx + (y) * nx + (x)]

int nx, ny;
float *dens;

double time_diff_sec(struct timeval st, struct timeval et)
{
    return (double)(et.tv_sec-st.tv_sec)+(et.tv_usec-st.tv_usec)/1000000.0;
}

void init()
{
    int x, y;
    int cx = nx/2, cy = 0; /* center of ink */
    int rad = (nx+ny)/8; /* radius of ink */

    for(y = 0; y < ny; y++) {
        for(x = 0; x < nx; x++) {
            float v = 0.0;
            if (((x-cx)*(x-cx)+(y-cy)*(y-cy)) < rad*rad) {
                v = 1.0;
            }
            DENS(0, y, x) = v;
            DENS(1, y, x) = v;
        }
    }

    return;
}

/* Calculate for one time step */
/* Input: dens[t%2], Output: dens[(t+1)%2] */
void calc(int nt)
{
    int t, x, y;

    for (t = 0; t < nt; t++) {
        int from = t%2;
        int to = (t+1)%2;

#if 1
        printf("step %d\n", t);
#endif

    // parallelize
    #pragma omp parallel private(x, y)
    #pragma omp for
        for (y = 1; y < ny-1; y++) {
            for (x = 1; x < nx-1; x++) {
                DENS(to, y, x) = 0.2 * (DENS(from, y, x)
                                        + DENS(from, y, x-1)
                                        + DENS(from, y, x+1)
                                        + DENS(from, y-1, x)
                                        + DENS(from, y+1, x));
            }
        }
    }

    return;
}

int  main(int argc, char *argv[])
{
    struct timeval t1, t2;
    int nt = 20; /* number of time steps */

    if (argc < 3) {
        printf("usage: %s nx ny [nt]\n", argv[0]);
        return 1;
    }
    else { /* if an argument is specified */
        nx = atoi(argv[1]);
        ny = atoi(argv[2]);
        if (argc == 4) nt = atoi(argv[3]);
    }

    dens = malloc(sizeof(float) * 2 * ny * nx);
    if (dens == NULL) { // 念のため
        printf("malloc failed\n");
        return 1;
    }

    init();

    gettimeofday(&t1, NULL);

    calc(nt);

    gettimeofday(&t2, NULL);

    {
        double sec;
        double gflops;
        int op_per_point = 5; // 4 add & 1 multiply per point

        sec = time_diff_sec(t1, t2);
        printf("Elapsed time: %.3lf sec\n", sec);
        gflops = ((double)nx*ny*nt*op_per_point)/sec/1e+9;
        printf("Speed: %.3lf GFlops\n", gflops);
    }

    free(dens);

    return 0;
}
