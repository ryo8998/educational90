#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    ll K;
    cin >> K;
    ll ans = 0;
    vector<ll> divisor;
    for(ll i= 1; i * i <= K; i++){
        if(K% i == 0){
            if(i == K/i){
                divisor.push_back(i);
            }else{
                divisor.push_back(i);
                divisor.push_back(K/i);
            }
        }
    }
    sort(divisor.begin(),divisor.end());
    for(auto a: divisor){
        // cout << a << endl;
        ll bc = K/a;
        ll cnt = 0;
        for(auto b: divisor){
            if(bc % b == 0){
                ll c = bc / b;
                if(a <= b && b <= c){
                    cnt++;
                }
            }
        }
        ans += cnt;
    }

    cout << ans << endl;

}