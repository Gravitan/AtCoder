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
    
    ll a, b, c; cin >> a >> b >> c;
    if (a != b && b == c) cout << "Yes" << endl;
    else cout << "No" << endl;
}