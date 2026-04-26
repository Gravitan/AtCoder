#include <atcoder/all>
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k; cin >> n >> k;

    ll ans = 0;
    ll sum = 0;
    for (int i = 0; i < k; i++) {
        sum += n + i;
        if(sum >= k) {
            ans = i;
            break;
        }
    }
    
    cout << ans << endl;
}