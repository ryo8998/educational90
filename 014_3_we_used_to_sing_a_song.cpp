#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    for(int i=0; i<N; i++){
     cin >> A[i];   
    }
    for(int i=0; i<N; i++){
     cin >> B[i];   
    }

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    long long count = 0;
    for(int i=0; i<N; i++){
        count += abs(A[i]-B[i]);
    }
    cout << count << endl;

}