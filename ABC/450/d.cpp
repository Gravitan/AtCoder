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
    
    ll n, k; cin >> n >> k;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    for (auto &x : a) x %= k;
    sort(a.begin(), a.end());

    ll mx = 0;
    for (int i = 0; i < n - 1; ++i) {
        ll tmp = a[i + 1] - a[i];
        mx = max(tmp, mx);
    }
    ll tmp = a[0] + k - a[n - 1];
    mx = max(tmp, mx);

    ans = k - mx;
    cout << ans << endl;
    
}