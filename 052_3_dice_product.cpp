#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    long long ans = 1;
    long long mod =  1000000007;
    for(int i=0; i<n;i++){
        int sum = 0;
        for(int j=0; j<6; j++){
            int a;
            cin >> a;
            sum +=a;
        }
        (ans*=sum)%=mod;
    }
    cout << ans << endl;
}