#include <bits/stdc++.h>
using namespace std;

long long binary_search(long long x, vector<long long>&A){
    long long size = A.size();
    long long left = 0;
    long long right = size-1;
    while(right - left > 1){
        long long mid = (left + right) / 2;
        if(A[mid] >= x){
            right = mid;
        }else{
            left = mid;
        }
    }
    return left;
}
long long closer(long long x, long long a, long long b){
    if(abs(x - a) < abs(x - b)) return a;
    else return b;
}

int main(){
    int N,Q;
    cin >> N;
    vector<long long> A(N);
    for(int i=0; i<N; i++) cin >> A[i];
    sort(A.begin(),A.end());
    cin >> Q;
    for(int j=0; j<Q; j++){
        long long b;
        cin >> b;
        long long leftIndex = binary_search(b,A);
        long long closerNum = closer(b,A[leftIndex],A[leftIndex+1]);
        cout << abs(b - closerNum) << endl;
    }
}