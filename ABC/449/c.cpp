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
    
    ll n, l, r; cin >> n >> l >> r;
    string s; cin >> s;

    vector<ll> a(26, 0);
    for (int i = l; i <= r; i++) a[s[i] - 'a']++;

    for (int i = 0; i + l < n; ++i) {
        ans += a[s[i] - 'a'];
        --a[s[i + l] - 'a'];
        if (i + r + 1 < n) ++a[s[i + r + 1] - 'a'];
    }
    cout << ans << endl;
}