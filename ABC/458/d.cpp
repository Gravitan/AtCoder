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
    
    ll x, q; cin >> x >> q;
    priority_queue<ll, vector<ll>, greater<ll>> upp;
    priority_queue<ll> dow;

    auto add = [&](ll val) {
        dow.push(val);
        upp.push(dow.top());
        dow.pop();

        if (upp.size() > dow.size()) dow.push(upp.top()), upp.pop();
    };

    ll a, b; add(x);
    for (int query = 0; query < q; ++query) {
        cin >> a >> b;
        add(a); add(b);

        cout << dow.top() << "\n";
    }

}