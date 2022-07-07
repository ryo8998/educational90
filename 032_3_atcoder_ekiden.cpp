#include <bits/stdc++.h>
using namespace std;


int main(){
    int N , M;
    cin >> N;
    vector<bool> visited(N,false); 
    vector<int> P(N);
    // vector< vector<int>> A(N,vector<int>(N));
    // for(int i=0; i<N; i++){
    //     for(int j=0; j<N; j++){
    //         cin >> A[i][j];
    //     }
    // }
    // cin >> M;
    // vector< vector<bool>> B(M,vector<bool>(true));
    // for( int i=0; i<M; i++){
    //     int x,y;
    //     cin >> x >> y;
    //     B[x-1][y-1] = false;
    //     B[y-1][x-1] = false;
    // }
    for(int i=0; i<N; i++) P[i] = i+1;
    int ans = (1 << 30);
    do{
        for(int i=0; i<N; i++){
            cout << P[i] << ",";
        }
        cout << endl;
    }while(next_permutation(P.begin(),P.end()));


}