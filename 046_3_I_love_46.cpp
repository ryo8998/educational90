#include <bits/stdc++.h>
using namespace std;



int main(){
    int N;
    cin >> N;
    vector<int> A(46,0);
    vector<int> B(46,0);
    vector<int> C(46,0);

    for(int i=0; i<N;i++){
        int num;
        cin >> num;
        num %=46;
        // cout << num << endl;
        A[num] +=1;
    } 
     for(int i=0; i<N;i++){
        int num;
        cin >> num;
        num %=46;
        B[num] +=1;
    } 
 
    for(int i=0; i<N;i++){
        int num;
        cin >> num;
        num %=46;
        C[num] +=1;
     } 
    long long count = 0;
    for(int i=0; i<46; i++){
        for(int j=0; j<46; j++){
            for(int k=0; k<46; k++){
                if((i + j + k)%46==0){
                    // cout << "i " << i << endl;
                    // cout << "j " << j << endl;
                    // cout << "k " << k << endl;
                    count += (long long)A[i] * B[j] * C[k];
                }
            }
        }
    }
    cout << count << endl;
 
}