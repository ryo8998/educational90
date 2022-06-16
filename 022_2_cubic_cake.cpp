#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    if(b==0) return a;
    return gcd(b,a%b);
};

int main(){
    long long A,B,C;
    cin >> A >> B >> C;
    long long gcdAB = gcd(A,B);
    long long gcdAll = gcd(gcdAB,C);
    cout << (A/gcdAll-1) + (B/gcdAll-1) + (C/gcdAll-1) << endl;
}

