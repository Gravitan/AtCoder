#include <atcoder/all>
#include <bits/stdc++.h>
#include <cstdio>
#define _GLIBCXX_DEBUG
using namespace std;
using namespace atcoder;
using ll = long long;

vector<int>e[200010];
bool flag[200010];
deque<int> deq;
bool stop;
 
void dfs(int k,int to){
	if(!stop)deq.push_back(k);
	if(k==to)stop=true;
    flag[k]=true;
	int sz=e[k].size();
    for(int i=0;i<sz;i++){
        if(!flag[e[k][i]])dfs(e[k][i],to);
    }
	if(!stop)deq.pop_back();
	return;
}

int main(void) {
    int n;
    cin>>n;
    vector<int> a(n); for (auto &x : a) cin >> x;
    int u,v;
    for(int i=0;i<n-1;i++){
		cin>>u>>v;
		e[u].push_back(v);
		e[v].push_back(u);
    }
    
    
    for (int num = 1; num <= n; ++num) {
        for(int i=1;i<=n;i++)flag[i]=false;
        stop = false;
        dfs(1,num);
        
        bool ans = false;
        set<int> tmp;
        while(!deq.empty()){
            if (tmp.count(a[deq.front() - 1])) ans = true;
            tmp.insert(a[deq.front() - 1]);
            deq.pop_front();
        }
        if (ans) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}