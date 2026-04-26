// #include <atcoder/all>
// #include <bits/stdc++.h>
// #include <cstdio>
// using namespace std;
// using namespace atcoder;
// using ll = long long;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll ans = 0;
    
//     ll n; cin >> n;
//     vector<ll> a(n);
//     for (auto &x: a) cin >> x;
//     sort(a.begin(), a.end());


//     if (a[0] == a[n - 1]) {
//         if (n % 2) cout << a[0] << endl;
//         else cout << a[0] << " " << a[0] + a[1] << endl;
//         return 0;
//     }

//     ll check = 1;
//     for (int i = 1; i < n; i++) {
//         if (a[n - 1 - i] != a[n - 1]) {
//             check = n - i;
//             break;
//         }
//     }
//     bool ok = false, ok2 = false;
//     ll base, base2;
//     if (check % 2 == 0) { 
//         ok = true;
//         base = a[check];
//         for (int i = 0; i < check / 2; i++) {
//             if (a[i] + a[check - 1 - i] != base) ok = false;
//         }
//     }
//     if (n % 2 == 0) {
//         ok2 = true;
//         base2 = a[0] + a[n - 1];
//         for (int i = 0; i < n / 2; i++) {
//             if (a[i] + a[n - 1 - i] != base2) ok2 = false;
//         }
        
//     }
//     if (ok and ok2) cout << base << " " << base2 << endl;
//     else if (ok) cout << base << endl;
//     else cout << base2 << endl;
// }

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

    ll n; cin >> n;
    vector<ll> a(n); for (auto &x: a) cin >> x;
    ll point = -1;

    sort(a.begin(), a.end());

    for (int i = n - 1; i > 0; i--) {
        if (a[i] != a[i - 1]) {
            point = i - 1;
            break;
        }
    }

    bool ok = true;
    if ((point + 1) % 2 == 0) {
        for (int i = 0; i < (point + 1) / 2; i++) {
            if (a[i] + a[point - i] != a[point + 1]) ok = false;
        }
        if (ok) cout << a[point + 1] << " ";
    }

    ok = true;
    if (n % 2 == 0) {
        for (int i = 0; i < n / 2; i++) {
            if (a[i] + a[n - 1 - i] != a[0] + a[n - 1]) ok = false;
        }
        if (ok) cout << a[0] + a[n - 1];
    }
}