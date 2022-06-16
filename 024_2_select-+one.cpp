#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    vector<int> B(N);
    vector<int> diff(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    for(int i=0; i<N; i++){
        cin >> B[i];
        diff[i] = abs(A[i]-B[i]);
    }

    long long sumOfDiff = accumulate(diff.begin(),diff.end(),0);
    bool flag;
    flag = (sumOfDiff%2 == K%2) && (K >= sumOfDiff);
    cout << (flag?"Yes":"No") << endl;
    
}