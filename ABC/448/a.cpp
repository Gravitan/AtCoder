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
    
    ll n, x; cin >> n >> x;
    vector<ll> a(n); for (auto &x : a) cin >> x;
    for (int i = 0; i < n; ++i) {
        if (a[i] < x) {
            x = a[i];
            cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
    
}