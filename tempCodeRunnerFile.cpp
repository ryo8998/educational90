#include <bits/stdc++.h>
using namespace std;


int main(){
    int N, Q;
    int shift_count = 0;
    vector<int> list(N);
    cin >> N >> Q;
    for(int i=0; i<N; i++){
        int A;
        cin >> A;
        list.push_back(A);
    }
    for(int i=0; i<Q; i++){
        int t,x,y;
        cin >> t >> x >> y;
        x--;
        y--;
        x -= shift_count;
        x %= N;
        x += N;
        x %= N;
        y -= shift_count;
        y %= N;
        y += N;
        y %= N;
        if(t == 1) swap(list[x], list[y]);
        if(t == 2) shift_count++;
        if(t == 3) cout << list[x] << endl;
    }
}