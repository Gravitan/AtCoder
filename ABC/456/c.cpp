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
    
    vector<ll> a;
    string s; cin >> s;
    ll tmp = 1;
    for (int i = 1; i < (int) s.size(); ++i) {
        if (s[i - 1] != s[i]) ++tmp;
        else a.push_back(tmp), tmp = 1;
    }
    a.push_back(tmp);

    for (int i = 0; i < (int) a.size(); ++i) {
        for (int j = 1; j <= a[i]; ++j) {
            ans += j;
            ans %= 998244353;
        }
    }

    cout << ans << endl;
} 
