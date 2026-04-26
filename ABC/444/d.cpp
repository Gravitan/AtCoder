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
    vector<ll> a(2000000, 0);
    ll mx = 0;
    for (int i = 0; i < n; i++) {
        ll tmp; cin >> tmp;
        a[tmp - 1]++; mx = max(mx, tmp - 1);
    }

    for (int i = mx; i > 0; i--) a[i - 1] += a[i];
    
    for (int i = 0; i <= mx; i++) {
        ll tmp = a[i] / 10;
        a[i] %= 10;
        a[i + 1] += tmp;
        if (i == mx and a[i + 1] != 0) mx++;
    }

    for (int i = mx; i >= 0; i--) cout << a[i];
    cout << endl;
}