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
    
    ll n, k; cin >> n >> k;

    ll tmp;
    map<ll, ll> a;
    for (int i = 0; i < n; ++i) {
        cin >> tmp; ++a[tmp];
    }

    vector<ll> sum;
    for (auto x : a) {
        sum.push_back(x.first * x.second);
    }

    sort(sum.begin(), sum.end());

    for (int i = 0; i < (int) sum.size() - k; ++i) {
        ans += sum[i];
    }
    cout << ans << endl;
}