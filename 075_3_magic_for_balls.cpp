#include <bits/stdc++.h>
using namespace std;

vector <pair<int,int>> prime; 

int main(){
    int total = 0;
    long long N;
    cin >> N;
    for(int i=2; i<= sqrt(N); i++){
        if(N % i == 0){
            int cnt = 0;
            while(N%i ==0){
                cnt++;
                N/=i;
            }
            total +=cnt;
        }
    }
    if(N != 1){
        total++;
    }
    // cout << total << endl;
    cout << (int)ceil(log2(total)) << endl;

}