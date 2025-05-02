
#include <bits/stdc++.h>
using namespace std;
int main() {
 

    int n, m;
    cin >> n >> m; 
    int ar[n][n];
    for(int i=0; i <n; i++){
        for(int j=0; j<n; j++){
            ar[i][j]=0;
        }
    }
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        ar[u-1][v-1] = 1;
        ar[v-1][u-1] = 1;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }

   stack <int> st;
   bool visited [n];
   bool temp;
   int path[n];
   int start;
   int k=0;
   for( int i=0; i<n;i++){
       visited[i]=0;
   }
   cin>>start;
   st.push(start);
    visited[start]=1;
    path[k]=start;
    k++;
    int i, j;
    while(!st.empty()){
        i=st.top(); 
        temp=1;
        for (int j=0; j<n; j++){
            if (ar[i][j] && !visited[j]){
                st.push(j);
                visited[j]=1;
                path[k]=j;
                k++;
                temp=0;
                break;
            }
        }
        if (temp){
            st.pop();
        }
    }
    cout<<"Виведений шлях: ";
    for (int i=0; i<n; i++){
        cout<<path[i]<<" ";
    }
    return 0;
}