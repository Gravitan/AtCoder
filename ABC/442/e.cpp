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
    ll n, q; cin >> n >> q;
    vector<long double> r(n), rsort(n);
    for (int i = 0; i < n; i++) {
        ll x, y; cin >> x >> y;
        r[i] = atan2(y, x);
    }
    rsort = r;
    sort(rsort.begin(), rsort.end());

    for (int i = 0; i < q; i++) {
        ll a, b; cin >> a >> b;
        auto uiter = upper_bound(rsort.begin(), rsort.end(), r[a - 1]);
        auto liter = lower_bound(rsort.begin(), rsort.end(), r[b - 1]);
        ll ans = distance(liter, uiter); if (ans <= 0) ans += n;
        cout << ans << endl;
    }
}