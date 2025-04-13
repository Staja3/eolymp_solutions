#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    set <int> st;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    for(auto a:st){
        cout<<a<<" ";
    }
}
