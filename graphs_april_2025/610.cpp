#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int x;
    long long ans = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            scanf("%d", &x);
            if(i != j){
                ans += x;
            }
        }
    }
    printf("%lld\n", ans / 2);
    return 0;
}
