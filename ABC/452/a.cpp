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
    
    ll m, d; cin >> m >> d;
    if (m == 1 and d == 7) ans = 1;
    if (m == 3 and d == 3) ans = 1;
    if (m == 5 and d == 5) ans = 1;
    if (m == 7 and d == 7) ans = 1;
    if (m == 9 and d == 9) ans = 1;

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl; 
}