#include <bits/stdc++.h>
using namespace std;
int d(int a, int b){
    return abs(abs(a)-abs(b));
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    vector<int>v;
    map<int,int> mp;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
        mp[x]=i;
    }
    sort(v.begin(), v.end());
    int mn_d=d(v[0], v[1]);
    pair<int,int> ans={v[0],v[1]};
    for(int i=0; i<n-1; i++){
        int cur_d=d(v[i], v[i+1]);
        if(cur_d<mn_d){
            mn_d=cur_d;
            ans={v[i], v[i+1]};
        }
    }
    cout<<mn_d<<'\n';
    cout<<min(mp[ans.first],mp[ans.second])+1<<' '<<max(mp[ans.first],mp[ans.second])+1;
}
