#include <atcoder/dsu>
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
using namespace atcoder;

int main() {
    int t;  cin >> t;

    for (int i = 0; i < t; i++) {
        int n, w;   cin >> n >> w;

        if (n <= w) {
            cout << 0 << endl;
            continue;
        }

        vector<int> c(n);
        long sum = 0;
        for (int j = 0; j < n; j++) {
            cin >> c[j];
            sum += c[j];

            
        }

        long mn = -1;
        for (int j = 0; j < w; j++) {
            long tmp = 0;
            for (int k = 0; k < n; k++) {
                // 演算子優先順要確認
                if (((k + j) % (2 * w)) < w) tmp += c[k];
            }
            if (j == 0) mn = tmp;
            if (mn > tmp) mn = tmp;
            if (mn > sum - tmp) mn = sum - tmp;
        }
        cout << mn << endl;       
    }
    
}