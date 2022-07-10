#include <bits/stdc++.h>
using namespace std;
#include <climits>


int main(){
    int N , M;
    cin >> N;
    // vector<bool> visited(N,false); 
    vector<int> P(N);
    vector< vector<int>> A(N,vector<int>(N));
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> A[i][j];
        }
    }
    cin >> M;
    vector< vector<bool>> B(N,vector<bool>(N,true));
    for( int i=0; i<M; i++){
        int x,y;
        cin >> x >> y;
        // cout << x << "," << y << "," << endl;
        B[x-1][y-1] = false;
        B[y-1][x-1] = false;
    }
    for(int i=0; i<N; i++) P[i] = i+1;
    int ans = INT_MAX;
    do{
        int sum = 0;
        bool flag = true;
        for(int i=0; i<N; i++){
            // cout << P[i] << ", ";
            sum += A[P[i]-1][i];
            if(i != N-1 && B[P[i]-1][P[i+1]-1] == false) flag = false;
        }
        // cout << endl;
        // cout << sum << endl;
        if(flag) ans = min(ans, sum);
    }while(next_permutation(P.begin(),P.end()));
    cout << (ans == INT_MAX ? -1 : ans) << endl;
}