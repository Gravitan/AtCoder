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
    
    string s; cin >> s;
    if (s[0] == s.back()) cout << "Yes" << endl;
    else cout << "No" << endl;
}