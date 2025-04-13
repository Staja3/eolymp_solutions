#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int ar[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        {
            cin>>ar[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(ar[i][j]){
                printf("%d %d\n", i+1, j+1);
                ar[j][i]=0;
            }
        }
    }
}
