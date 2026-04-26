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
    vector<string> s(n);
    ll m = 0;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        m = max(m, (ll)s[i].size());
    }

    for (int i = 0; i < n; i++) {
        ll tmp = (m - s[i].size()) / 2;
        cout << string(tmp, '.') << s[i] << string(tmp, '.') << endl;
    }
}