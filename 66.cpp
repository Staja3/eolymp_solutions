#include <bits/stdc++.h>
using namespace std;
bool comp(pair<string, string> s1, pair<string,string> s2){
    return s1.second<s2.second;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    vector <pair<string,string>> t(n);
    for(int i=0; i<n; i++){
        string st,en;
        cin>>st>>en;
        t[i].first=st;
        t[i].second=en;
    }
    sort(t.begin(), t.end(), comp);
    int ans=1;
    string last=t[0].second;
    for(int i=1; i<n; i++){
        if(t[i].first>=last){
            ans++;
            last=t[i].second;
        }
    }
    cout<<ans;
}