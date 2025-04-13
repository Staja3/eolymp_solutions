#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    set <string> st;
    while(getline(cin,s)){
        int sz=s.size();
        string word="";
        for(int i=0; i<sz; i++){
            if(isalpha(s[i])){
                word+=tolower(s[i]);
            }
            else if(!word.empty()){
                st.insert(word);
                word="";
            }
        }
        if(!word.empty()){
            st.insert(word);
        }
    }
    for(auto slovo:st){
        cout<<slovo<<'\n';
    }
}
