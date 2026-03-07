#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    set<pair<int,string>> st;
    for(int i=0; i<n; i++){
        int icq;
        string nm;
        cin>>nm>>icq;
        st.insert({icq,nm});
    }
    set<pair<string,int>> st1;
    int cnt=0;
    for(auto it=st.begin(); it!=st.end()&&cnt<k; ++it, ++cnt){
        st1.insert({(*it).second,(*it).first});  
    }
    for(auto a:st1){
        cout<<a.first<<'\n';
    }

}