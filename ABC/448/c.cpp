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
    
    ll n, q; cin >> n >> q;
    vector<ll> a(n); for (auto &x : a) cin >> x;
    map<ll, ll> s; for (auto &x : a) s[x]++;
    
    for (int i = 0; i < q; ++i) {
        ll k; cin >> k;
        vector<ll> b(k); for (auto &x : b) cin >> x, --x;
        for (auto &x : b) {
            s[a[x]]--;
            if (s[a[x]] == 0) s.erase(a[x]);
        }
        cout << s.begin()->first << endl;
        for (auto &x : b) s[a[x]]++;     
    }
}