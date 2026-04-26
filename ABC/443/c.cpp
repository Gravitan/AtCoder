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
    ll n, t; cin >> n >> t;
    vector<ll> a(n + 1);
    for (int i = 0; i < n; i++) cin >> a[i];
    a[n] = t;
    
    ll open = 0;
    for (int i = 0; i < n + 1; i++) {
        if (open < a[i]) {
            ans += a[i] - open;
            open = a[i] + 100;
        }
    }

    cout << ans << endl;
}