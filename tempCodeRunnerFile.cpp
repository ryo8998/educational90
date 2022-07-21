#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

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
        ans *= K;
        ans *= (K-1);
        N -= 2;
        a = K-2;
        while(N > 0){
            if(N & 1){
                    ans = (long long)(ans) * a % mod;
                    // ans %= (long long)1000000007;
                }
            a = (long long)(a) * a %mod;
            N >>= 1;
        }
    }
    cout << ans << endl;
}