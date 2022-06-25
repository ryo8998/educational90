#include <bits/stdc++.h>
using namespace std;

long long toDecimal(string N){
    long long decimal = 0;
    for(int i=N.size()-1; i>=0; i--){
        decimal += int(N[i]-'0') * pow(8,N.size()-i-1);
    }
    return decimal;
}

string toBase9(long long decimal){
    if (decimal == 0) {
		return "0";
	}
    string N = "";
    while(decimal!=0){
            char n = (decimal % 9 + '0');
            n =  n == '8' ? '5' : n;
            N = n + N;
                decimal /= 9;
            }
    return N;
}



int main(){
    string N;
    int K;
    cin >> N >> K;
    if(N=="0"){
        cout << 0 << endl;
        return 0;
    } 
    for(int i=0; i<K; i++){
        long long decimal = toDecimal(N);
        // cout << decimal << endl;
        N = toBase9(decimal);
    }
    for(int i=0; i<N.size(); i++){
        cout << N[i];
    }
    cout << endl;
    
}
