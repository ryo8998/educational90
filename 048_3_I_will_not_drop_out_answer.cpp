#include <bits/stdc++.h>
using namespace std;


int main(){
    int N, K;
    cin >> N >> K;
    vector <int> A(N);
    vector <int> B(N);
    vector <int> arr(2*N);
    for(int i=0; i<N;i++){
        int a,b;
        cin >> a >> b;
        arr.push_back(b);
        arr.push_back(a-b);
    }
    sort(arr.begin(),arr.end(),greater<long long>());
    long long num = 0;
    for(int i=0; i<K;i++){
        num += arr[i];
    }
    cout << num << endl;
}