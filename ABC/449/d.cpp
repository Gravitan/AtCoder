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
    ll ans = 0;
    
    ll l, r, d, u; cin >> l >> r >> d >> u;

    for (ll i = l; i <= r; ++i) {
        if (i % 2 == 0) {
            ans += max(0LL, min(u, abs(i) - 1) - max(d, -(abs(i) - 1)) + 1);
        }
    }

    for (ll i = d; i <= u; ++i) {
        if (i % 2 == 0) {
            ans += max(0LL, min(r, abs(i)) - max(l, -abs(i)) + 1);
        }
    }
    cout << ans << endl;
}