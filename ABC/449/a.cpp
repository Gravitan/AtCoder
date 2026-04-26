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
    double ans = 0;
    
    double d; cin >> d;
    d /= 2;
    ans = d * d * M_PI;
    cout << fixed << setprecision(15) << ans << endl;
}