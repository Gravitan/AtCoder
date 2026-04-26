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
    ll q; cin >> q;
    ll vol = 0;
    ll on = 0;
    for (int i = 0; i < q; i++) {
        ll tmp; cin >> tmp;
        if (tmp == 1) vol++;
        if (tmp == 2) vol = max(0LL, vol - 1);
        if (tmp == 3) on++;

        if (on % 2 and vol >= 3) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}