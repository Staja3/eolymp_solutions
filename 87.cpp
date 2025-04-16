#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string comm;
    cin>>comm;
    set <int> visited;
    int pos=0;
    visited.insert(pos);
    for(char ch:comm){
        if(ch=='L'){
            pos--;
        }
        if(ch=='R'){
            pos++;
            
        }
        visited.insert(pos);
    }
    cout<<visited.size();
}