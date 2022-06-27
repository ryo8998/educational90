#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i=0; i<(1<<N); i++){
        string ans = "";
        bool flag = true;
        int countOpen = 0;
        int countClose = 0; 
        for(int j=N-1; j>=0; j--){
            if(countOpen < countClose) flag = false;
            if(i & (1<<j)){
                ans += ")";
                countClose ++;
            }else{
                ans += "(";
                countOpen ++;
            } 
        }
        if(countOpen != countClose) flag = false;
        if(flag) cout << ans << endl;
    }

}