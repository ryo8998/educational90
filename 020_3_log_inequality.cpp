#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c,num;
    cin >> a >> b >> c;
    num = 1;
    for(int i=0; i<b; i++){
        num *= c;
    }
    bool flag = a < num;
    cout << (flag ? "Yes":"No") << endl;

}