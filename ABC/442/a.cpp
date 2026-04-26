#include <atcoder/all>
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int,int>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll ans = 0;
    string s; cin >> s;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == 'i' or s[i] == 'j') ans++;
    }

    cout << ans << endl;
}