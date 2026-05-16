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
    string s, t; cin >> s >> t;

    ans = lcm(n, m);
    bool ok = true;
    for (int i = 0; i < gcd(n, m); ++i) {
        if (s[0 + ans / m * i] != t[0 + ans / n * i]) ok = false;
    }
    
    if (ok) cout << ans << "\n";
    else cout << -1 << "\n";
}