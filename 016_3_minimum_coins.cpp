#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, A,B,C;
    cin >> N;
    cin >> A >> B >> C;
    long long minCount = 10000;
    for(int i=0; i<10000; i++){
        if(A * i > N) continue;
        for(int j=0; j<10000; j++){
            if(N - (A*i + B*j) < 0) continue;
            long long remainder = N - (A*i + B*j);
            if(remainder % C == 0){
                minCount = min(minCount,(i+j+remainder/C));
            }
        }
    }
    cout << minCount << endl;

}