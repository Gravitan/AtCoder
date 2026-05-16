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

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            ans = 0;
            if (i - 1 >= 0) ++ans;
            if (i + 1 < h) ++ans;
            if (j - 1 >= 0) ++ans;
            if (j + 1 < w) ++ans;
            cout << ans << " ";
        }
        cout << "\n";
    }
}