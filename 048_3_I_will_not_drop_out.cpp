#include <bits/stdc++.h>
using namespace std;

//計算量的に間に合わないことわかっていてdpで試すも、案の定TLEになる

int main(){
    int N, K;
    cin >> N >> K;
    vector <int> A(N);
    vector <int> B(N);
    vector <vector <long long> >dp(N+1, vector<long long>(K+1,-1));
    for(int i=0; i<N;i++){
        int a,b;
        cin >> a >> b;
        A[i] = a;
        B[i] = b;
    }
    // cout << A[0] << endl;
    dp[0][0] = 0;
    for(int i=0; i<N;i++){
        for(int j=0; j<=K; j++){
            // cout << dp[i][j] + B[i] << endl;
            // cout << dp[i][j] + A[i] << endl;
            if(dp[i][j] == -1) continue;

            if(j + 1 <= K){
                dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + B[i]);
                // cout << dp[i+1][j+1] << endl;
            }
            if(j + 2 <= K){
                dp[i+1][j+2] = max(dp[i+1][j+2], dp[i][j] + A[i]);
                // cout << dp[i+1][j+2] << endl;
            }
            dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
            // cout << dp[i][j] << ", " << endl;
        }
    }
    long long max_num = 0;
    for(int i=0; i<=N;i++){
        for(int j=0; j<=K; j++){
            // cout << dp[i][j] << ", " << endl;
            max_num= max(max_num, dp[i][K]);
        }
    }
    cout << max_num << endl;
}