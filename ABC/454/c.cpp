#include <atcoder/all>
#include <bits/stdc++.h>
#include <cstdio>
#define _GLIBCXX_DEBUG
using namespace std;
using namespace atcoder;
using ll = long long;

ll ans = 0;
using Graph = vector<vector<int>>;
// 深さ優先探索
vector<bool> seen;
void dfs(const Graph &G, int v) {
    if (!seen[v]) ++ans;
    seen[v] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue; // next_v が探索済だったらスルー
        dfs(G, next_v); // 再帰的に探索
    }
}

int main() {
// 頂点数と辺数
int N, M; cin >> N >> M;

// グラフ入力受取 (ここでは無向グラフを想定)
Graph G(N);
for (int i = 0; i < M; ++i) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    G[a].push_back(b);
    // G[b].push_back(a);
}

// 頂点 0 をスタートとした探索
    seen.assign(N, false); // 全頂点を「未訪問」に初期化
    dfs(G, 0);
    cout << ans << endl;
}

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll ans = 0;
    
//     ll n, m; cin >> n >> m;

// }