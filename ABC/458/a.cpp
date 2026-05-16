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
    
    string s; cin >> s;
    ll n; cin >> n;

    ll si = s.size();
    for (int i = n; i < si - n; ++i) {
        cout << s[i];
    }
    cout << "\n";
}