#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

constexpr array<int, 4> DY = {1, 0, -1, 0};
constexpr array<int, 4> DX = {0, 1, 0, -1};

int main(){
    int N;
    queue<int> q;
    cin >> N;
    vector<int>dist(N,-1);
    vector<int> odd;
    vector<int> even;
    vector<vector<int>> graph(N,vector<int>());
    for(int i=0; i<N-1; i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    q.push(0);
    dist[0] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto n:graph[node]){
            // cout << n << endl;
            if(dist[n]!= -1){
                continue;
            }
            q.push(n);
            dist[n] = dist[node] + 1;
        }
    }
    for(int i=0; i<N; i++){
        if(dist[i]%2 == 0){
            even.push_back(i+1);
        }else{
            odd.push_back(i+1);
        }
    }
    if(even.size() >= odd.size()){
        for(int i=0; i<N/2; i++){
            cout << even[i] << endl;
        }
    }else{
        for(int i=0; i<N/2; i++){
            cout << odd[i] << endl;
        }
    }

}