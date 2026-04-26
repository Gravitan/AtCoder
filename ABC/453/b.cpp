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
    
    ll t, x; cin >> t >> x;

    ll tmp; cin >> tmp;
    cout << 0 << " " << tmp << endl;
    for (int i = 1; i <= t; ++i) {
        ll a; cin >> a;
        if (abs(tmp - a) >= x) {
            tmp = a;
            cout << i << " " << tmp << endl;
        }
    }
}