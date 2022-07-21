#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;
    long long ans = 0;
    vector <long long> A(N);
    for(int i=0; i<N;i++){
        cin >> A[i];
    }
    vector<long long> diff(N-1,0);
    for(int i=1; i<N; i++){
        diff[i-1] = A[i]-A[i-1];
        ans += abs(diff[i-1]);
    }
    for(int i=0; i<Q; i++){
        long long l, r, v;
        cin >> l >> r >> v;
        l--;
        r--;
        if(l != 0){
            ans -= abs(diff[l-1]);//一旦減らしてキャンセルする
            diff[l-1] += v;
            ans += abs(diff[l-1]);
            // cout << "a" << endl;
        }
        if(r != N-1){
            ans -= abs(diff[r]);//一旦減らしてキャンセルする
            diff[r] -= v;
            ans += abs(diff[r]);
        }
        cout << ans << endl;
    }
}