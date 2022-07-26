#include <bits/stdc++.h>
using namespace std;

bool binary_search(vector<long long> &acc, long long target){
    long long left = 0LL;
    long long right = acc.size()-1LL;
    while(left <= right){
        long long mid = (left + right) / 2LL;
        if(acc[mid] == target){
            // cout << target << endl;
            return true;
        }else if(acc[mid]>target){
            right = mid -1LL;
        }else{
            left = mid + 1LL;
        }
    }
    return false;
}

int main(){
    long long N;
    long long sum = 0;
    cin >> N;
    vector<long long> accumulate(2*N+1);
    vector<long long> A(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
        sum += A[i];
    }
    if(sum % 10LL != 0LL){
        cout << "No" << endl;
        return 0;
    }
    accumulate[0] = 0;
    for(int i=1; i<=N; i++){
        accumulate[i] = accumulate[i-1] + A[i-1];
    }
    // int size = accumulate.size();
    // cout << "size " << accumulate.size() << endl;

    for(int i=1; i<=N; i++){
        accumulate[N + i] = accumulate[N + i -1] + A[i-1];
    }
    // size = accumulate.size();
    // cout << "size " << accumulate.size() << endl;
    // for(int i=0; i<2*N+1; i++){
    //     cout << accumulate[i] << ", " << endl;
    // }
    for(int i=0; i<=N; i++){
        bool flag = false;
        long long target = accumulate[i] + sum / 10LL; 
        // cout << "target " << target << endl;
        flag = binary_search(accumulate,target);
        if(flag){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}


