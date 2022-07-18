#include <bits/stdc++.h>
using namespace std;


int main(){
    int N,L;
    long long mod = 1000000000+7;
    cin >> N >> L;
    vector<long long> dp(N+1,0);
    dp[0] = 1;
    for(int i=0; i<N; i++){
        (dp[i+1] += dp[i]) %= mod;
        if(i + L <= N){
            (dp[i + L] += dp[i]) %= mod;
        }
    }
    cout << dp[N] << endl;
}