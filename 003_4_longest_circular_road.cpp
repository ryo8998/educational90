#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

// int dfs(vector<vector<int>>&graph,vector<bool>visited, int position, int max_num){
//     cout << "positon " << position << endl;
//     cout << "max " << max_num << endl;
//     visited[position] = true;
//     for(auto node: graph[position]){
//         if(visited[node] == false){
//             max_num = max(max_num,dfs(graph, visited,node,max_num + 1));
//         }
//     }
//     return max_num -1 ;
// }

void bfs(vector<vector<int>> &graph,vector<int> &dist, int position){
    dist[position] = 0;
    queue<int> q;
    q.push(position);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto n:graph[node]){
            if(dist[n] == -1){
                dist[n] = dist[node] + 1;
                q.push(n);
            }
        }
    }
}

int main(){
    int N;
    cin >> N;
    vector <vector<int>> graph(N,vector<int>());
    vector<int> dist1(N,-1);
    vector<int> dist2(N,-1);

    for(int i=0; i<N-1; i++){
        int a,b;
        cin >> a >> b;
        a--;b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    bfs(graph, dist1, 0);
    int id = 0;
    int max_num = 0;
    for(int i=0; i<N; i++){
        if(max_num < dist1[i]){
            id = i;
            max_num = dist1[i];
        }
    }
    // cout << " id " << id << endl; 
    bfs(graph, dist2, id);
    max_num = 0;
    for(int i=0; i<N; i++){
        if(max_num < dist2[i]){
            max_num = dist2[i];
        }
    }
    cout << max_num + 1 << endl;

}