#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll N = 1000;

int blue[12]={0, 0, 0, 0, 0, 0, 4, 4, 4, 6, 5, 1 };
int red[12]={0, 0, 0, 0, 0, 0, 4, 4, 6, 6, 3, 2 };
ll ar[5][5];
void init(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            ar[i][j] = 0;
        }
    }
}
int rand_blue(){
    return blue[rand() % 12];
}
int rand_red(){
    return red[rand() % 12];
}
map <int, string> animal = {
    {0, "Rabbit"},
    {1, "Wolf"},
    {2, "Fox"},
    {3, "Horse"},
    {4, "Sheep"},
    {5, "Cow"},
    {6, "Pig"}
};
map <int, int> ox1={
    {0, 0}, {4, 1}, {6, 2}, {5, 3}, {1, 4}
};
map <int, int> oy1={
    {0, 0}, {4, 1}, {6, 2}, {3, 3}, {2, 4}
};
map <int, int> ox2={
    {0, 0}, {1, 4}, {2, 6}, {3, 5}, {4, 1}
};
map <int, int> oy2={
    {0, 0}, {1, 4}, {2, 6}, {3, 3}, {4, 2}
};
int main() {
    srand(time(NULL));
    init();
    cout << "Enter the number of interactions (N): ";
    cin >> N;
    for(ll i=0; i<N; i++){
        int x = rand_blue();
        int y = rand_red();
        int a = ox1[x];
        int b = oy1[y];
        if (a>b) {
            swap(a, b);
        }
        ar[a][b]++;
    }


    for(int i=0; i<5; i++){
        for(int j=i; j<5; j++){
            cout << animal[ox2[i]] << " and " << animal[oy2[j]] << " : " << ((double)ar[i][j]/N*100) << "%" << endl;
        }
    }

    return 0;
}
