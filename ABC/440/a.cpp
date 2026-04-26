#include <atcoder/dsu>
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
using namespace atcoder;

int main() {
    int x, y;  cin >> x >> y;

    for (int i = 0; i < y; i++) {
        x *= 2;
    }


    cout << x << endl;
}