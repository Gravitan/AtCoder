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
    
    ll t; cin >> t;
    for (int cs = 0; cs < t; cs++) {
        ll n, d; cin >> n >> d;
        vector<ll> egg(n), cons(n);
        for (auto &x : egg) cin >> x;
        for (auto &x : cons) cin >> x;

        ll cur = 0;
        for (int i = 0; i < n; i++) {
            while (cons[i] > 0) {
                if (egg[cur] > cons[i]) {
                    egg[cur] -= cons[i];
                    break;
                }
                else {
                    cons[i] -= egg[cur];
                    egg[cur] = 0;
                    cur++;
                }
            }
            if (i - d >= 0) egg[i - d] = 0;
        }

        cout << accumulate(egg.begin(), egg.end(), 0LL) << endl;
    }
}

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll ans = 0;
    
//     ll t; cin >> t;
//     for (int cs = 0; cs < t; cs++) {
//         ll n, d; cin >> n >> d;
//         vector<ll> egg(n), cons(n);
//         for (auto &x : egg) cin >> x;
//         for (auto &x : cons) cin >> x;

//         for (int i = 0; i < n; i++) {
//             for (int j = max(0LL, - i + d); ; j++) {
//                 if (egg[i - d + j] > cons[i]) {
//                     egg[i - d + j] -= cons[i];
//                     break;
//                 }
//                 else {
//                     cons[i] -= egg[i - d + j];
//                     egg[i - d + j] = 0;
//                 }
//             }
//             if (i - d >= 0) egg[i - d] = 0;
//         }
//         cout << accumulate(egg.begin(), egg.end(), 0LL) << endl;
//     }
// }

/*
入力形式を勘違いしていた。　a1 b1 a2 b2...　ではなく a1 a2... b1 b2...　戦犯
計算量の試算が誤っていた。尺取りじゃないと間に合わない場合がある。
*/