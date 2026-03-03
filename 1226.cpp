#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin>>t;
    while(t--){
        bool ans=1;
        int n; 
        cin>>n;
        map<pair<int,int>, int> mp;
        for(int i=0; i<n; i++){
            int c,w;
            cin>>c>>w;
            mp[{c,w}]++;
        }

        for(auto &p:mp){
            int cur_w, cur_i;
            cur_w=p.first.second;
            cur_i=p.first.first;
            if(mp[{cur_w,cur_i}]!=mp[{cur_i, cur_w}]){
                ans=0;
                break;
            }
        }
        printf("%s\n",(ans)?"YES":"NO");
    }


}