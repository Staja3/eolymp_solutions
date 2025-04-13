#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int ar[n][n];
    int count[n]={0};

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++ ){
            cin>>ar[i][j];
            count[i]+=ar[i][j];
        }
    }
    for(int i=0; i<n; i++){
        cout<<count[i]<<' ';
        for(int j=0; j<n; j++){
            if(ar[i][j]){
                cout<<j+1<<' ';
            }
        }
        cout<<'\n';
    }
}
