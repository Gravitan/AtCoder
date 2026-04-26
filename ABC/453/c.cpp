#include <atcoder/all>
#include <bits/stdc++.h>
#include <cstdio>
#define _GLIBCXX_DEBUG
using namespace std;
using namespace atcoder;
using ll = long long;

ll ans = 0;
ll n;

void cal (ll now, ll i, const vector<ll> &l, ll dir, ll count) {
    ll now2 = now + dir * l[i];
    if (now >= 0 and now2 < 0) ++count;
    if (now < 0 and now2 >= 0) ++count;
    if (i + 1 < n){
        cal (now2, i + 1, l, 1, count);
        cal (now2, i + 1, l, -1, count);
    }
    if (ans < count) ans = count;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    vector<ll> l(n); for (auto &x : l) cin >> x;
    ll count = 0;
    cal(0, 0, l, 1, count);
    cal(0, 0, l, -1, count);
    
    cout << ans << endl;
}