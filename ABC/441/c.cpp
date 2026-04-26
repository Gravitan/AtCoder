#include <atcoder/dsu>
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
using namespace atcoder;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k, x; cin >> n >> k >> x;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    long long ans = -1;

    long long sum = 0;
    for (long long i = n - k; i < n; i++) {
        sum += a[i];
        if (sum >= x) {
            ans = i + 1;
            break;
       }
    }

    cout << ans << endl;
}