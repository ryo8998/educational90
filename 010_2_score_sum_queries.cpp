#include <bits/stdc++.h>
using namespace std;

int main(){
 int N,Q;
 cin >> N;
 vector<int> sum1(N+1);
 vector<int> sum2(N+1);
sum1[0] = 0;
sum2[0] = 0;

 for(int i=1; i<=N; i++){
     int c,p;
     cin >> c >> p;
     if(c == 1) {
         sum1[i] = sum1[i-1] + p;
         sum2[i] = sum2[i-1];
     }
     else{
         sum2[i] = sum2[i-1] + p;     
         sum1[i] = sum1[i-1];     
     } 
 }

 cin >> Q;
 vector<vector<int>> B(Q,vector<int>(2));
 for(int i=0; i<Q; i++){
     int l,r;
     cin >> l >> r;
    //  B[i][0] = l;
    //  B[i][1] = r;
    // cout << sum1[r-1] << " " << sum1[l] << endl;
    // cout << sum2[r-1] << " " << sum2[l] << endl;

    cout << sum1[r] - sum1[l-1] << " " << sum2[r] - sum2[l-1] << endl;
 }

}