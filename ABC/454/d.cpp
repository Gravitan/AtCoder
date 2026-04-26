#include <atcoder/all>
#include <bits/stdc++.h>
#include <cstdio>
#define _GLIBCXX_DEBUG
using namespace std;
using namespace atcoder;
using ll = long long;

string convert(string s) {
    string result;
    ll i = 0;
    for (auto &x : s) {
        ++i;
        result.push_back(x);
        while (i >= 4) {
            if (result[i - 1] == ')' and result[i - 2] == 'x' and result[i - 3] == 'x' and result[i - 4] == '(') {
                result[i - 4] = 'x';
                result.pop_back();
                result.pop_back();
                i -= 2;
            } else break;
        } 
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll ans = 0;
    
    ll t; cin >> t;
    for (int CASE = 0; CASE < t; ++CASE) {
    string a, b; cin >> a >> b;
    if (convert(a) == convert(b)) cout << "Yes" << endl;
    else cout << "No" << endl;
    }
}