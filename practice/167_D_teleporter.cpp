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

    ll n, k; cin >> n >> k;
    vector<vector<ll>> a(60, vector<ll>(n));
    for (auto &x : a[0]) {
        cin >> x; x--;
    }

    for (int i = 0; i + 1 < 60; i++) {
        for (int j = 0; j < n; j++) {
            a[i + 1][j] = a[i][a[i][j]];
        }
    }

    for (int i = 0; k > 0; i++) {
        if (k & 1LL) ans = a[i][ans];
        k >>= 1;
    }

    cout << ans + 1 << endl;
}

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll ans = 0;

//     ll n, k; cin >> n >> k;
//     vector<ll> a(n);
//     for (auto &x : a) cin >> x, x--;

//     vector<bool> seen(n, false);
//     deque<ll> t;
//     int cur = 0;
//     while (true) {
//         if (seen[cur]) {
//             while (cur != t.front()) {
//                 t.pop_front();
//                 k--;
                
//                 if (k == 0) {
//                     cout << t[0] + 1 << endl;
//                     return 0;
//                 }
//             }
//             break;
//         }

//         seen[cur] = true;
//         t.push_back(cur);
//         cur = a[cur];
//     }
//     cout << t[k % t.size()] + 1 << endl;
// }