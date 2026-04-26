#include <atcoder/dsu>
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
using namespace atcoder;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;  cin >> t;

    for (int i = 0; i < t; i++) {
        int n, w;   cin >> n >> w;

        vector<long> c(2 * w, 0);
        int cost;
        for (int j = 0; j < n; j++) {
            cin >> cost;
            c[j % (2 * w)] += cost;
        }

        if (n <= w) {
            cout << 0 << endl;
            continue;
        }

        long sum = 0;
        for (int j = 0; j < 2 * w ; j++) sum += c[j];

        long p = 0;
        for (int j = 0; j < w ; j++) p += c[j];

        long mn = p;
        if (sum - p < p) mn = sum - p;
        for (int j = 0; j < w - 1; j++) { // -1?
            p += c[j + w];  p -= c[j];
            if (mn > p) mn = p;
            if (mn > sum - p) mn = sum - p;
        }
        cout << mn << endl;       
    }
    
}