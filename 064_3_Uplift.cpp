#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    cin >> N >> Q;
    vector <int> A(N);
    for(int i=0; i<N;i++){
        cin >> A[i];
    }
    vector<int> diff(N-1,0);
    for(int i=1; i<N; i++){
        diff[i-1] = abs(A[i-1]-A[i]);
    }
    for(int i=0; i<Q; i++){
        int l, r, v;
        cin >> l >> r >> v;
        l--;
        r--;
        if((diff[l-1] >=0 && v >= 0) || (diff[l-1] < 0 && v < 0)){
            diff[l-1] += abs(v);
        }else {
            diff[l-1] -= abs(v);
        }
        if((diff[r] >=0 && v >= 0) || (diff[r] < 0 && v < 0)){
            diff[r] += abs(v);
        }else {
            diff[r] -= abs(v);
        }
        cout << accumulate(diff.begin(), diff.end(), 0) << endl;
    }
    // cout << diff[0] << endl;


}