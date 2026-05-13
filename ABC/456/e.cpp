#include <atcoder/all>
#include <bits/stdc++.h>
#include <cstdio>
#define _GLIBCXX_DEBUG
using namespace std;
using namespace atcoder;
using ll = long long;


ll n, w;
bool cycle;
vector<vector<bool>> seen, now_path;

void dfs(const vector<vector<vector<ll>>> &G, int v, int t) {
    seen[t][v] = true;
    now_path[t][v] = true;

    for (auto next_v : G[t][v]) {
        ll nt = (t + 1) % w;
        if (cycle) return;
        if (now_path[nt][next_v]) {cycle = true; return;}
        if (!seen[nt][next_v])dfs(G, next_v, nt);
    }
    now_path[t][v] = false;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll ans = 0;
    
    ll t; cin >> t;
    for (int CASE = 0; CASE < t; ++CASE) {
    
    ll m; cin >> n >> m;
    vector<vector<ll>> graph(n);
    for (int i = 0; i < m; ++i) {
        ll u, v; cin >> u >> v; --u; --v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cin >> w;
    vector<string> s(n);
    for (auto &x : s) cin >> x;
    
    vector<vector<vector<ll>>> tg(w, vector<vector<ll>>(n));
    for (int i = 0; i < w; ++i) {
        ll nt = (i + 1) % w;
        for (int u = 0; u < n; ++u) {
            if (s[u][i] == 'x') continue;
            if (s[u][nt] == 'o') tg[i][u].push_back(u);
            for (ll nv : graph[u]) {
                if (s[nv][nt] == 'o') tg[i][u].push_back(nv);
            }
        }    
    }

    cycle = false;
    seen.assign(w, vector<bool>(n, false));
    now_path.assign(w, vector<bool>(n, false));

    for (int city = 0; city < n && !cycle; ++city) {
        dfs(tg, city, 0);
    }
    
    cout << (cycle ? "Yes" : "No") << endl;
    }
}