#include <atcoder/all>
#include <bits/stdc++.h>
#include <cstdio>
#define _GLIBCXX_DEBUG
using namespace std;
using namespace atcoder;
using ll = long long;

// 意外と苦戦　push_backなのに初期化しているミス　単純に階段行列の扱いミス　番号と配列の対応ミス

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll ans = 0;
    
    ll n; cin >> n;
    vector<vector<ll>> c(n - 1);

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i; j < n - 1; ++j) {
            ll tmp; cin >> tmp;
            c[i].push_back(tmp);
        }
    }

    for (int a = 0; a < n - 2; ++a) {
        for (int b = a + 2; b < n; ++b) {
            for (int i = a + 1; i < b; ++i) {
                if (c[a][b - a - 1] > c[a][i - a - 1] + c[i][b - i - 1]) {
                    ans = 1;
                    // cout << a << ":" << b << ":" << i << endl;
                    // cout << c[a][b - a - 1] << ":" << c[a][i - a - 1] << ":" << c[i][b - i - 1] << endl;
                }
            }
        }
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}