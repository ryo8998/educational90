#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N;
    cin >> N;
    int median = N / 2;
    ll medX, medY;
    ll ans = 0;
    // if(N%2==0){
    //     median = N/2;
    // }else{
    //     median = N/2 + 1;
    // }
    vector<ll> X(N);
    vector<ll> Y(N);
    for(int i=0; i<N; i++){
        ll x,y;
        cin >> x >> y;
        X[i] = x;
        Y[i] = y;
    }
    sort(X.begin(),X.end());
    sort(Y.begin(),Y.end());
    for(int i=0; i<N; i++){
        if(i == median){
            medX = X[i];
            medY = Y[i];
        }
    }
    // cout << medX << endl;
    // cout << medY << endl;
    for(int i=0; i<N; i++){
        ans += abs(medX - X[i]);
        ans += abs(medY - Y[i]);
    }
    cout << ans << endl;

}