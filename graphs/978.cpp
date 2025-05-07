#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> g;
vector <int> visited;
vector <pair<int,int>> ans;
void dfs(int v){
    visited[v]=1;
    for(auto ech : g[v]){
        if(!visited[ech]){
            ans.push_back({v+1, ech+1});
            dfs(ech);
        }
    }
}
int main() {
    int n,m;
    cin>>n>>m;
    visited.resize(n,0);
    g.resize(n);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        g[a-1].push_back(b-1);
        g[b-1].push_back(a-1);
        }
        dfs(0);
        for(auto c : ans){
            printf("%d %d\n",c.first, c.second);
        }
    return 0;
}