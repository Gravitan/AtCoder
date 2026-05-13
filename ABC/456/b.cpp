#include <atcoder/all>
#include <bits/stdc++.h>
#include <cstdio>
#define _GLIBCXX_DEBUG
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double ans = 0;
    
    vector<vector<ll>> n(3, vector<ll>(3, 0));
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 6; ++j) {
            ll tmp; cin >> tmp; tmp -= 4;
            if (tmp >= 0) ++n[i][tmp];
        }
    }

    ans += n[0][0] * n[1][1] * n[2][2] + n[0][0] * n[1][2] * n[2][1] +
        n[0][1] * n[1][0] * n[2][2] + n[0][1] * n[1][2] * n[2][0] +
        n[0][2] * n[1][1] * n[2][0] + n[0][2] * n[1][0] * n[2][1];

    ans /= 6 * 6 * 6;
    cout << ans << endl;
}