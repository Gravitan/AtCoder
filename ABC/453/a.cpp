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
    
    ll n; string s; cin >> n >> s;

    bool ok = true;
    for (int i = 0; i < n; ++i) {
        if (ok and s[i] != 'o') {
            ok = false;
            cout << s[i];
            continue;
        }
        if (ok == false) cout << s[i];
    }
    cout << endl;
}