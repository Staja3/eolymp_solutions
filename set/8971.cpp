#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    set <int> st;
    int ar[n];
    vector <int> v;
    for(int i=0; i<n; i++){
        cin>>ar[i];
        if(st.find(ar[i])==st.end()){
        st.insert(ar[i]);
        v.push_back(ar[i]);}
    }
    for(auto x:v){
        cout<<x<<" ";
    }
}
