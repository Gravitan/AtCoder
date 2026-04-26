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
    
    ll n; cin >> n;
    vector<ll> a(n);
    for(auto &x : a) cin >> x, x--;
    
    map<ll, ll> dp;
    for (auto &x : a) {
        if (!dp.count(x)) dp[x] = 1;
        if (dp.count(x - 1)) {
            dp[x] = max(dp[x], dp[x - 1] + 1); 
        }
    }

    for (auto &x : dp) ans = max(ans, x.second);
    cout<< ans <<endl;
}

/*
最初はLISだと思ってDPを調べた。
+1条件が強く楽に実装できると思いvectorを用いたが、a[10**9]は大きすぎて無理。
mapを使ったらうまくいった。
*/