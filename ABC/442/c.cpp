#include <atcoder/all>
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n; ll m; cin >> m;
    vector<ll> r(n, n - 1);
    for (int i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        r[a - 1]--; r[b - 1]--;
    }

    for (int i = 0; i < n; i++) {
        ll x = r[i];
        ll ans = x * (x - 1) * (x - 2) / 6;
        cout << ans << endl;
    }
}