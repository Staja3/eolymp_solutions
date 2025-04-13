#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    ll ar[n];
    multiset <ll> od;
    multiset <ll> ev;

    for(int i=0; i<n; i++){
        cin>>ar[i];
        if(ar[i]%2==0){
            ev.insert(ar[i]);
        }
        else{
            od.insert(ar[i]);
        }
    }
    for(auto x:od){
        cout<<x<<' ';
    }
    auto it=ev.rbegin();
    for(it=ev.rbegin(); it>=ev.rend(); it--){
        cout<<*it<<' ';
    }
}
