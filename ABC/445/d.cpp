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

    struct s
    {
        ll tate, yoko;
        ll mx;
        ll mn;
        ll num;
        ll tans, yans;
    };
    
    
    ll h, w, n; cin >> h >> w >> n;
    vector<s> c(n); 
    for (int i = 0; i < n; i++) {
        cin >> c[i].tate;
        cin >> c[i].yoko;
        c[i].mx = max(c[i].tate, c[i].yoko);
        c[i].mn = min(c[i].tate, c[i].yoko);
        c[i].num = i;
    }

    sort(c.begin(), c.end(), [](const s& a, const s& b){ 
        if (a.mx != b.mx) return a.mx > b.mx;
        else return a.mn > b.mn;
    });

    for (int i = 0; i < n; i++) {
        if (h == c[i].tate){
            w -= c[i].yoko;
            c[i].tans = 1;
            c[i].yans = w + 1;
        }
        else if (w == c[i].yoko) {
            h -= c[i].tate;
            c[i].tans = h + 1;
            c[i].yans = 1;
        }
        else return 1;
    }

    sort(c.begin(), c.end(), [](s& a, s& b){ return a.num < b.num; });  

    for (int i = 0; i < n; i++) {
        cout << c[i].tans << " " << c[i].yans << endl; 
    }
}