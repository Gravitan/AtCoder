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
    
    ll n, m; cin >> n >> m;
    vector<ll> c(m); for (auto &x : c) cin >> x;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }

    ans = accumulate(c.begin(), c.end(), 0LL);
    for (int i = 0; i < n; ++i) {
        c[a[i] - 1] = max(c[a[i] - 1] - b[i], 0LL);
    }
    ans -= accumulate(c.begin(), c.end(), 0LL);
    cout << ans << endl;
}