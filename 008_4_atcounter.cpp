#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007

int main(){
    int N;
    string s;
    cin >> N >> s;
    vector<ll> dp(N+1);
    string at = "atcoder";
    dp[0] = 1;
    for(int i=0; i<N; i++){
        for(int j=0; j<8; j++){
            if(s[i] == at[j]){
                dp[j+1] += dp[j];
                dp[j+1] %= mod;
            }
        }
    }
    cout << dp[7] << endl;
}