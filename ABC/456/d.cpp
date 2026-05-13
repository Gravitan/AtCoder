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
    
    vector<ll> sum(3, 0);
    string s; cin >> s;
    for (int i = 0; i < (int) s.size(); ++i) {
        ll c = s[i] - 'a';
        ll dp = 1;
        for (int j = 0; j < 3; ++j) {
            if (j != c) dp += sum[j], dp %= 998244353;
        }
        sum[c] += dp; sum[c] %= 998244353;
        ans += dp; ans %= 998244353;
    }

    cout << ans << endl;
} 
