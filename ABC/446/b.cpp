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
    
    ll n, m; cin >> n >> m;

    vector<bool> check(m, false);
    vector<ll> answer(n, 0);
    for (int i = 0; i < n; i++) {
        ll num; cin >> num;
        bool ok = true;
        for (int j = 0; j < num; j++) {
            ll tmp; cin >> tmp;
            if (ok and check[tmp - 1] == false) {
                check[tmp - 1] = true;
                answer[i] = tmp;
                ok = false;
            }
        }
    }

    for (auto &x : answer) cout << x << endl;
}