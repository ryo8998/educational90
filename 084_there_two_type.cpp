#include <bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;

int main(void){
    int N;
    string s;
    int l;
    int r;
    cin >> N;
    cin >> s;
    bool circle_flag = false;
    bool cross_flag = false;
    for(int i=0; i<N; i++){
        if(s[i]=='o'){
            circle_flag = true;
        }
        if(s[i] == 'x'){
            cross_flag = true;
        }
        if(circle_flag && cross_flag){
            r = i+1;
            break;
        }
    }
    cross_flag = false;
    circle_flag = false;
    for(int i=0; i<N; i++){
        if(s[N-i-1]=='o'){
            circle_flag = true;
        }
        if(s[N-i-1] == 'x'){
            cross_flag = true;
        }
        if(circle_flag && cross_flag){
            l = N - i;
            break;
        }
    }
    cout << "l " << l <<endl;
    cout << "r " << r <<endl;
    int duplicate  = l - r + 1;
    cout << duplicate << endl;
    r = N - r + 1;
    cout << l * r - (duplicate / 2 + duplicate);

}