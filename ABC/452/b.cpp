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
    vector<vector<char>> a(h, vector<char>(w));
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (i == 0 or j == 0 or i == h - 1 or j == w - 1) a[i][j] = '#';
            else a[i][j] = '.';
        }
    }

    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            cout <<  a[i][j];
        }
        cout << endl;
    }
       
}