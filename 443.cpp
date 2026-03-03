#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool comp(pair<ll, string> a, pair<ll, string> b){
    return (a.first<b.first);
}
bool comp1(pair<ll, string> a, pair<ll, string> b){
    return (a.second<b.second);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector <pair<ll,string>> v;
    int n,k;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        string ln;
        ll icq;
        cin>>ln>>icq;
        v.push_back({icq, ln});
    }
    sort(v.begin(), v.end(), comp);
    vector <pair<ll,string>> v1;
    for(int i=0; i<k; i++){
        v1.push_back(v[i]);
    }
    sort(v1.begin(), v1.end(), comp1);
    for(auto c:v1){
        cout<<c.second<<'\n';
    }
}