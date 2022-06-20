#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main(){
    int Q;
    cin >> Q;
    deque<int> deq;
    for(int i=0;i<Q; i++){
        int t,x;
        cin >> t >> x;
        if(t==1) deq.push_front(x);
        if(t==2) deq.push_back(x);
        if(t==3) cout << deq[x-1] << endl;
    }
    
}