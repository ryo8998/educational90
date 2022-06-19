#include <bits/stdc++.h>
using namespace std;

int main(){
    int H,W;
    cin >> H >> W;
    if(H==1) cout << W << endl;
    else if(W==1) cout << H << endl;
    else cout << (int)(ceil(H/2.0) * ceil(W/2.0)) << endl;

}