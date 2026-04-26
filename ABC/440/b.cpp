#include <atcoder/dsu>
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;
using namespace atcoder;

int main() {
    int N;  cin >> N;
    vector<int> s(N), t(N);
    
    for (int i = 0; i < N; i++) {
        cin >> s[i];
        t[i] = s[i];
    }
    
    sort(t.begin(), t.end());

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < N; j++) {
            if (t[i] == s[j]) {
                cout << j + 1 << " ";
            }
        }
    } 
    cout << endl;  
}