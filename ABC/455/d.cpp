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
    
    ll n, q; cin >> n >> q;
    vector<ll> down(2 * n, -1);
    vector<ll> up(2 * n, -1);
    for (int i = 0; i < n; ++i) {
        down[i] = i + n;
        up[i + n] = i;
    }

    ll c, p;
    for (int i = 0; i < q; ++i) {
        cin >> c >> p; --c; --p;
        up[down[c]] = -1;
        down[c] = p;
        up[p] = c;
    }

    for (int i = n; i < 2 * n; ++i) {
        ans = 0;
        int x = i;
        while (up[x] != -1) {
            x = up[x];
            ++ans;
        }
        cout << ans << " \n"[i == 2 * n - 1];
    }
}