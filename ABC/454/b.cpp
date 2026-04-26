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
    vector<ll> huku(m, 0);
    for (int i = 0; i < n; ++i) {
        ll tmp; cin >> tmp;
        ++huku[tmp - 1];
    }

    bool ok1 = true;
    bool ok2 = true;
    for (auto &x : huku) {
        if (x > 1) ok1 = false;
        if (x == 0) ok2 = false;
    }
    if (ok1) cout << "Yes" << endl;
    else cout << "No" << endl;
    if (ok2) cout << "Yes" << endl;
    else cout << "No" << endl;
    
}