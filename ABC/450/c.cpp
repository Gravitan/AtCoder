#include <atcoder/all>
#include <bits/stdc++.h>
#include <cstdio>
#define _GLIBCXX_DEBUG
using namespace std;
using namespace atcoder;
using ll = long long;

using Graph = vector<vector<char>>;

const vector<int> dh = {-1, 0, 0, 1};
const vector<int> dw = {0, -1, 1, 0};
int H, W;

// 深さ優先探索
vector<vector<bool>> seen;
void dfs(const Graph &G, int h, int w) {
    seen[h][w] = true; // v を訪問済にする

    // v から行ける各頂点 next_v について
    for (int i = 0; i < 4; ++i) {
        int nh = h + dh[i]; int nw = w + dw[i];
        if (nh < 0 || nw < 0 || nh >= H || nw >= W) continue;
        if (seen[nh][nw]) continue;
        if (G[nh][nw] == '#') continue;
        dfs(G, nh, nw);
    } 
}

int main() {
// 頂点数と辺数
cin >> H >> W;
Graph S(H, vector<char>(W));
for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
        cin >> S[i][j];
    }
}

// 頂点 0 をスタートとした探索
    seen.assign(H, vector<bool>(W, false)); // 全頂点を「未訪問」に初期化
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (i != 0 && j != 0 && i != H - 1 && j != W - 1) continue;
            if (seen[i][j] || S[i][j] == '#') continue;
            dfs(S, i, j);
        }
    }

    int ans = 0;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (seen[i][j] || S[i][j] == '#') continue;
            dfs(S, i, j);
            ++ans;
        }
    }
    cout << ans << endl;
}

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll ans = 0;
     
// }