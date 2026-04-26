#include <atcoder/dsu>
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
using namespace atcoder;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m; cin >> n >> m;
    string s, t; cin >> s >> t;
    long long q; cin >> q;
    vector<string> w(q); 
    for (int i = 0; i < q; i++) cin >> w[i];

    for (int i = 0; i < q; i++) {
        bool ok_s = true;
        bool ok_t = true;
        for (int j = 0; j < (int)w[i].size(); j++) {
            bool st_s = false;
            bool st_t = false;
            for (int k = 0; k < n; k++) {
                if (w[i][j] == s[k]) {
                    st_s = true;
                }
            }
            for (int k = 0; k < m; k++) {
                if (w[i][j] == t[k]) {
                    st_t = true;
                }
            }
            if (st_s == false) ok_s = false;
            if (st_t == false) ok_t = false;
        }
        if (ok_s == true and ok_t == false) cout << "Takahashi" << endl;
        else if (ok_s == false and ok_t == true) cout << "Aoki" << endl;
        else cout << "Unknown" << endl;
    }
}