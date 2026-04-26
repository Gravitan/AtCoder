#include <atcoder/all>
#include <bits/stdc++.h>
#include <cstdio>
#define _GLIBCXX_DEBUG
using namespace std;
using namespace atcoder;
using ll = long long;

using Graph = vector<string>;
vector<ll> dx = {0, 0, -1, 1};
vector<ll> dy = {-1, 1, 0, 0};
ll h, w;

// 深さ優先探索
set<tuple<int, int, int>> seen;
vector<int> ans;
bool ok = false;
void dfs(const Graph &g, int i, int j, int dir) {
    if (g[i][j] == '.' or g[i][j] == 'S') seen.insert({i, j, -1});
    else seen.insert({i, j, dir}); // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (int c = 0; c < 4; ++c) {
        int ni = i + dy[c]; int nj = j + dx[c];
        if (g[i][j] == 'o' and dir != c) continue;
        if (g[i][j] == 'x' and dir == c) continue;
        if (ni < 0 or nj < 0 or ni >= h or nj >= w) continue;
        if (ok) return;

        if (g[ni][nj] == 'S' or g[ni][nj] == '#') continue;
        if (g[ni][nj] == '.') {
            if (seen.count({ni, nj, -1})) continue;
            ans.push_back(c);
            dfs(g, ni, nj, c);
        }
        if (g[ni][nj] == 'o' or g[ni][nj] == 'x') {
            if (seen.count({ni, nj, c})) continue;
            ans.push_back(c);
            dfs(g, ni, nj, c);
        }
        if (g[ni][nj] == 'G') {
            ok = true;
            ans.push_back(c);
            return;
        }
        
        if (!ok) ans.pop_back();
     // 再帰的に探索
    }
}

int main() {
    // 頂点数と辺数
    cin >> h >> w;

    // グラフ入力受取
    Graph g(h);
    for (auto &x : g) cin >> x;

    ll si, sj;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (g[i][j] == 'S') {
                si = i; sj = j;
            }
        }
    }

    // S スタートとした探索
    dfs(g, si, sj, -1);

    if (ok) {
        cout << "Yes" << endl;
        for (auto &x : ans) {
            if (x == 0) cout << "U";
            if (x == 1) cout << "D";
            if (x == 2) cout << "L";
            if (x == 3) cout << "R";
        }
        cout << endl;
    }
    else cout << "No" << endl;
    
}