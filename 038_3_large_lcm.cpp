#include <bits/stdc++.h>
using namespace std;
#include <climits>

long long gcd(long long a, long long b){
    if(a % b == 0) return b;
    return gcd(b, a%b);
}

int main(){
    long long A, B, POW18 = 1000000000000000000;
    cin >> A >> B;
    long long gcdAB = gcd(A,B);
    long long r = A / gcdAB;
    if(r >  POW18 / B){
        cout << "Large" << endl;
    }else {
        cout << B * r << endl;
    }
}