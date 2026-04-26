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
    
    ll h, w, q; cin >> h >> w >> q;
    for (int i = 0; i < q; ++i) {
        ll tmp, rc; cin >> tmp >> rc;
        if (tmp == 1) {
            cout << w * rc << endl;
            h -= rc;
        }
        else {
            cout << h * rc << endl;
            w -= rc;
        }
    }
}