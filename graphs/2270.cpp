#include <bits/stdc++.h>
using namespace std;
vector <int> visited;
vector <vector<int>> g;
bool fnd=0;
vector <int> route;
vector <int> ans;
void dfs(int v){
    route.push_back(v);
    visited[v]=1;
    for(auto to:g[v]){
        if(visited[to]==0){
            dfs(to);
            if (fnd) return;
        }
        else if(visited[to]==1){
            fnd = true;
            for(int i=route.size()-1; i>=0&&(route[i]!=to); --i){
                ans.push_back(route[i]); 
            }
            ans.push_back(to);
            reverse(ans.begin(), ans.end());
            return;
        }
    }
    visited[v]=2;
    route.pop_back();
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin>>n>>m;
    visited.resize(n,0);
    g.resize(n);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        a--; b--;
        g[a].push_back(b);
    }
    for(int i=0; i<n&&(!fnd); i++){
        if(visited[i]==0){
        dfs(i);}
    }
    if(fnd){
        cout<<"YES\n";
        for(auto ch:ans){
            cout<<ch+1<<' ';
        }
    }
    else{
        cout<<"NO";
    }
}
