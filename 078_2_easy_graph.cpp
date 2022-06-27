#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> graph(N+1);
    for(int i=0; i<M; i++){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int total = 0;
    for(int i=1; i<=N;i++){
        int count = 0;
        for(auto node: graph[i]){
            if(node < i) count ++;
        }
        if(count == 1) total++;
    }
    cout << total << endl;
}