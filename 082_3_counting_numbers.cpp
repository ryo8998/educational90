#include <bits/stdc++.h>
typedef unsigned long long ll;
#define mod 1000000007
using namespace std;

int main(){
    ll L, R;
    ll ans = 0;
    ll ldigit, rdigit;
    ll last, first;
    cin >> L >> R;
    ldigit = floor(log10(L)+1);
    rdigit = floor(log10(R)+1);
    
    // first = L;
    // last = min(R,((ll)pow(10,ldigit)-1LL));

    // ans += ((first + last) *(last - first + 1LL) /2) * ldigit % mod;
    // cout << ans << endl;
    for(int i=ldigit; i <= rdigit; i++){
        first = max(L,(ll)pow(10,i-1))%mod;
        last = min(R,((ll)pow(10,i)) - 1LL)%mod;
        ans += (((first + last) *(last - first + 1LL))/ 2LL) * i % mod;
    } 
    // cout << ans << endl;
    // first = (ll)pow(10,rdigit-1);
    // cout << "first " << first << endl;
    // last = R;
    // ans += ((first + last) *(last - first + 1LL) /2) * rdigit % mod;
    cout << ans << endl;
}