#include <atcoder/dsu>
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
using namespace atcoder;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long p, q, x, y; cin >> p >> q >> x >> y;

    if (p <= x and x <= p + 99 and q <= y and y <= q + 99) {
        cout << "Yes" << endl;
    }
    else cout << "No" << endl;

}