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

    ll m, n; cin >> m >> n;

    ll mod = 1000000007;
    
    ans = 1;
    while (n > 0) {
        if (n & 1) ans = ans * m % mod;
        m = m * m % mod;
        n >>= 1;
    }
    cout << ans << endl;
}