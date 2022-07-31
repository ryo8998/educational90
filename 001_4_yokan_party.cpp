#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool greedy_search(vector<ll> &A, int size, ll k){
    int cnt = 0;
    int sum = 0;
    // cout << "size " << size << endl;
    for(int i=0; i<A.size(); i++){
        if(i == 0){
            sum += A[i];
        }else {
            sum += A[i] - A[i-1];
        }
        // cout << "sum " << i << " " <<  sum << endl;
        if(sum >= size){
            cnt++;
            sum = 0;
        }
    }
    if(sum < size){
        cnt--;
    }
    // cout << (cnt >= k) << endl;
    return cnt >= k;
}


ll binary_search(vector<ll>&A, ll l, ll k){
    int ans = 0;
    int left = 0;
    int right = l-1;
    int mid;
    while(right - left > 1){
        mid = (left + right)/2;
        if(greedy_search(A, mid, k)){
            left = mid;
            // ans = mid;
        }else{
            right = mid;
        }
    }

    return left;
}


int main(){
    ll N, L;
    ll K;
    ll ans = 0;
    cin >> N >> L;
    cin >> K;
    vector<ll> A(N);
    for(int i=0; i<N;i++){
       cin >> A[i];
    }
    A.push_back(L);  
    ans = binary_search(A, L, K);
    cout << ans << endl;
}