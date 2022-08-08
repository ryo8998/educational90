
    dist[0] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto n:graph[node]){
            cout << n << endl;
            if(dist[n]!= -1){
                continue;
            }
            q.push(n);
            dist[n] = dist[node] + 1;
        }
    }
    for(int i=0; i<N-1; i++){
        cout << dist[i] << endl;
    }