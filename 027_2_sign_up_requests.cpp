#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    unordered_map<string,int> hashmap;
    for(int i=1; i<=N; i++){
        string s;
        cin >> s;
        if(hashmap.find(s) == hashmap.end()){
            hashmap[s] = 1;
            cout << i << endl;
        }
    }

}