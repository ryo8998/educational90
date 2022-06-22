#include <bits/stdc++.h>
using namespace std;

long long to10(string N){
    long long decimal = 0;
    for(int i=N.size()-1; i>=0; i++){
        decimal += N[i] * pow(8,N.size()-i-1);
    }
    return decimal;
}



int main(){
    string N;
    int K;
    cin >> N >> K;
    if(N=="0"){
        cout << 0 << endl;
        return 0;
    } 

    vector<int> A;
    // 10進数変換
    long long decimal = 0;
    int digit = 0;
    int lastDigit;
    long long remainder;
    for(int i=0; i<K; i++){
        if(i==K-1){
            decimal = to10(N);
            remainder = decimal;
            while(remainder!=0){
                A.push_back(remainder%9);
                remainder /= 9;
            }
            for(int i=A.size()-1; i>=0; i--){
            if(A[i]==8) cout << 5;
            else cout << A[i];
            }
        cout << endl;
        }else{
            decimal = to10(N);
            remainder = decimal;
            while(remainder!=0){
                A.push_back(remainder%9);
                remainder /= 9;
            }
            N = "";
            for(int i=0; i<A.size();i++){
                if(A[i] == 8) N += '5';
                else N += char(A[i] + '0');
            }
            A.clear();
        }
        
    }
    

}
