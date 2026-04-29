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
    
    ll l, r; cin >> l >> r;
    if (r - l < 2018) {
        ans = 2019;
        for (int i = l; i < r; ++i) {
            for (int j = i + 1; j <= r; ++j) {
                ans = min(ans, (ll) (i * j) % 2019);
            }
        }
    }
    cout << ans << endl;
}