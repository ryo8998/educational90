#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N, K;
    cin >> N >> K;
    vector<ll> A(N);
    int l=0,r=0;
    unordered_map<ll,ll> m;
    int cnt = 0;
    int ans = 0;
    for(int i=0; i<N; i++){
        cin >> A[i]; 
    }
    for(int r=0; r<N; r++){
        if(m[A[r]] == 0){
            cnt++;
        }
        m[A[r]]++;
        while(cnt > K){
            m[A[l]]--;
            if(m[A[l]] == 0){
                cnt--;
            }
            l++;
        }
        // cout << ans << endl;
        if(ans < r-l+1){
            ans = r-l+1;
        }
    }
    cout << ans << endl;
}