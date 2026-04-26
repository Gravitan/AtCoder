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
    
    string as, bs; cin >> as >> bs;
    vector<ll> a(80); vector<ll> b(80);
    ll cur;

    a[0] = 1; a[1] = 0; b[0] = 0; b[0] = 1;
    for (int i = 0; i < 80; ++i) {
        if (i > 1) {
            a[i] = a[i - 1] + a[i - 2];
            b[i] = b[i - 1] + b[i - 2];
        }

        if (a.size() * a[i] + b.size() * b[i] >= 1000000000000000000) {
            cur = i;
    }


}