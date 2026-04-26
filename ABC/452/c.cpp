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
    
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }

    ll m; cin >> m;
    vector<string> s(m);
    for (auto &x : s) cin >> x;
    
    vector<vector<bool>> mp(n, vector<bool>(26, false));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if ((int) s[j].size() == a[i]) {
                ll tmp = s[j][b[i] - 1] - 'a';
                mp[i][tmp] = true;
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        ans = 1;
        for (int j = 0; j < (int) s[i].size(); ++j) {
            if (mp[j][s[i][j] - 'a'] == false) ans = 0;
        }
        if (ans) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}