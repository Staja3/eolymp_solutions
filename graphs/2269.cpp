#include <bits/stdc++.h>
using namespace std;
int n;
vector <vector<int>> g;
vector <int> visited;
void dfs(int v){
    visited[v]=1;
    for(int k=0; k<n; k++){
        if(!visited[k]&&g[v][k]){
            dfs(k);
        }
    }
}
int main() {
    int ans=0;
    cin>>n;
    visited.resize(n,0);
    g.resize(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>g[i][j];
        }
    }
    for(int i=0; i<n; i++){
        if(!visited[i]){
            ans++;
            dfs(i);
        }
    }
    cout<<ans;
    return 0;
}