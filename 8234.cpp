#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if(n==0){cout<<1; return 0;}
    long long dp[n];
    dp[0]=1;
    dp[1]=2;
    dp[2]=4;
    for(int i=3; i<n; ++i){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    cout<<dp[n-1];
    return 0;
}
