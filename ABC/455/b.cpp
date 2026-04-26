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
    
    ll h, w; cin >> h >> w;
    vector<string> s(h); for (auto &x : s) cin >> x;
    
    for (int h1 = 0; h1 < h; ++h1) {
    for (int h2 = h1; h2 < h; ++h2) {
    for (int w1 = 0; w1 < w; ++w1) {
    for (int w2 = w1; w2 < w; ++w2) {
        bool ok = true;
        for (int i = h1; i <= h2; ++i) {
        for (int j = w1; j <= w2; ++j) {
            if (s[i][j] != s[h1 + h2 - i][w1 + w2 - j]) ok = false;
        }
        }
        if (ok) ++ans;
    }
    }  
    }
    }
    cout << ans << endl;
}