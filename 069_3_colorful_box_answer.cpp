#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

long long pow(long long a, long long b){
    long long ans = 1;
    while(b > 0){
            if(b & 1){
                    ans = (long long)(ans) * a % mod;
                    // ans %= (long long)1000000007;
                }
            a = (long long)(a) * a %mod;
            b >>=1;
    }
    return ans;
}

int main(){
    long long N, K, ans = 1;
    long long a;
    cin >> N >> K;
    if (K == 1) {
		cout << (N == 1 ? 1 : 0) << endl;
	}
	else if (N == 1) {
		cout << K % mod << endl;
	}
	else if (N == 2) {
		cout << (long long)(K) * (K - 1) % mod << endl;
	}
	else {
        cout<<K*(K-1)%mod*pow(K-2,N-2)%mod;
    }
    
}