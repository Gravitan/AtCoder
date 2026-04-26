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

    // string n; cin >> n;
    // sort(n.begin(), n.end());
    // if (n[0] == n[n.size() - 1]) cout << "Yes" << endl;
    // else cout << "No" << endl;

    // ll n; cin >> n;
    // if (n % 111 == 0) cout << "Yes" << endl;
    // else cout << "No" << endl;

    string s; cin >> s;
    if (s[0] == s[1] and s[1] == s[2]) cout << "Yes" << endl;
    else cout << "No" << endl;
}