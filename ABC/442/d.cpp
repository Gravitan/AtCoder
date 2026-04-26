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
    vector<ll> a(n); ll sum = 0;
    for (int i = 0; i < n; i++) {
        ll tmp; cin >> tmp; sum += tmp; a[i] = sum;
    }

    for (int i = 0; i < q; i++) {
        ll tmp; cin >> tmp;
        if (tmp == 1) {
            ll x; cin >> x;
            if (x != 1) a[x - 1] = a[x - 2] + a[x] - a[x - 1];
            else a[x - 1] = a[x] - a[x - 1];
        }
        else if (tmp == 2) {
            ll l, r; cin >> l >> r;
            if (l != 1) cout << a[r - 1] - a[l - 2] << endl;
            else cout << a[r - 1] << endl;
        }
    }
}