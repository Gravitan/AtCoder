#include <atcoder/all>
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll ans = 0;

    ll n, k; cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        ll sum = 0;
        for (char c: s) sum += c - '0';
        if (sum == k) ans++;
    }
    cout << ans << endl;
}