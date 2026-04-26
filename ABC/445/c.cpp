#include <atcoder/all>
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll ans = 0;

    ll n; cin >> n;
    vector<ll> a(n);
    for (auto &x : a) {
        cin >> x; x--;
    }

    for (int i = n - 2; i >= 0; i--) {
        a[i] = a[a[i]];
    }

    for (int x : a) cout << x + 1 << " ";
    cout << endl;
    
    // ll n; cin >> n;
    // vector<vector<ll>> a(101, vector<ll>(n + 1));
    // for (int i = 1; i <= n; i++) {
    //     cin >> a[0][i];
    // }

    // for (int i = 0; i < 100; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         ll tmp = j;
    //         for (int k = 0; k < 10; k++) {
    //         tmp = a[i][tmp];
    //         }
    //         a[i + 1][j] = tmp;
    //     }
    // }

    // for (int i = 1; i <= n; i++) {
    //     cout << a[100][i] << " ";
    // }
    // cout << endl;
}