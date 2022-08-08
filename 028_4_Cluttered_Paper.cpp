#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

ll arr[1001][1001] = {0};

int main(){
    int N;
    cin >> N;
    vector<ll> res(N);
    for(int i=0; i<N; i++){
        int lx,ly, rx,ry;
        cin >> lx >> ly >> rx >> ry;
        arr[ly][lx] += 1; // 左上
        arr[ly][rx] -= 1; //右上 
        arr[ry][rx] += 1; //右下
        arr[ry][lx] -= 1; //左下
    }

    for(int i=0; i<1001; i++){
        for(int j=1; j<1001; j++){
            arr[i][j] = arr[i][j] + arr[i][j-1];
        }
    }
    for(int i=1; i<1001; i++){
        for(int j=0; j<1001; j++){
            arr[i][j] = arr[i][j] + arr[i-1][j];
        }
    }
    for(int i=0; i<1001; i++){
        for(int j=0; j<1001; j++){
            if(arr[i][j] == 0) continue;
            res[arr[i][j]-1] +=1;
        }
    }
    for(int i=0; i<N; i++){
        cout << res[i] << endl;
    }
}