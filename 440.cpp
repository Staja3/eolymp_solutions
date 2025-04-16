#include <bits/stdc++.h>
using namespace std;

string max_permutation_after_cut(string s) {
    string max_result = s;
    int n = s.size();
    
    for (int cut = 1; cut < n; ++cut) {
        for (int i = 0; i + cut <= n; ++i) {
            string left = s.substr(i, cut);
            string right = s.substr(0, i) + s.substr(i + cut);
            
            for (int j = 0; j <= right.size(); ++j) {
                string new_s = right.substr(0, j) + left + right.substr(j);
                max_result = max(max_result, new_s);
            }
        }
    }
    
    return max_result;
}

int main() {
    string s;
    cin >> s;
    cout << max_permutation_after_cut(s) << endl;
    return 0;
}