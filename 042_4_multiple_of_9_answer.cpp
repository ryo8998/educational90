#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int K;
    cin >> K;
    if(K % 9 != 0){
        cout << 0 << endl;
        return 0;
    }
    vector<ll > dp(K+1,0);
    dp[0] = 1;
    for(int i=0; i<K; i++){
        for(int j=1; j<=9; j++){
            if(i + j > K) break;
            dp[i + j] += dp[i];
            dp[i + j] %= mod;
        }
    }
    cout << dp[K] << endl;
    // for(int i=0; i<K; i++){
    //     cout << dp[i] << endl;
    // }
}