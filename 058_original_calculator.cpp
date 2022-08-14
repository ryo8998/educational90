#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define mod 1000000007
constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int next_num(int n){
    int res = n;
    while(n>0){
        res += n%10;
        n/=10;
    }
    return res % 100000;
}

int main(){
    ll N,K;
    cin >> N >> K;
    vector<bool> visited(100000,false);
    ll num = N;
    ll cnt = 0;
    while(!visited[num]){
        visited[num] = true;
        cnt++;
        num = next_num(num);
    }
    cout << K % cnt << endl;
    int ans = N;
    for(int i=0; i<K%cnt; i++){
        ans = next_num(ans);
        cout << ans << endl;
    }
    cout << ans << endl;

}