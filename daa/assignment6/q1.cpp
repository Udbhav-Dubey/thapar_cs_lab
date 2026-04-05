#include <iostream>
#include <vector>
#include <queue>
std::vector<int>bfs(std::vector<std::vector<int>>&adj){
    int V=adj.size();
    std::vector<bool>visited(V,false);
    std::vector<int>res;
    std::queue<int>q;
    int src=0;
    visited[src]=true;
    q.push(src);
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        res.push_back(curr);
        for (int x:adj[curr]){
            if (!visited[x]){
                visited[x]=true;
                q.push(x);
            }
        }
    }
    return res;
}
void addEdge(std::vector<std::vector<int>>&adj,int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void dfsRec(std::vector<std::vector<int>>&adj,std::vector<bool>&visited,int s,std::vector<int>&res){
    visited[s]=true;
    res.push_back(s);
    for (int i:adj[s]){
        if (visited[i]==false){
            dfsRec(adj,visited,i,res);
        }
    }
}
std::vector<int>dfs(std::vector<std::vector<int>>&adj){
    std::vector<bool>visited(adj.size(),false);
    std::vector<int>res;
    dfsRec(adj,visited,0,res);
    return res;
}
int main (){
    int V=5;
    std::vector<std::vector<int>>adj(V);
    addEdge(adj,1,2);
    addEdge(adj,1,0);
    addEdge(adj,2,0);
    addEdge(adj,2,3);
    addEdge(adj,2,4);
    std::vector<int>res=bfs(adj);
    std::cout << "bfs : ";
    for (int i:res){
        std::cout << i << " ";
    }
    std::cout << "\n";
    std::vector<std::vector<int>>adj1(V);
    addEdge(adj1,1,2);
    addEdge(adj1,1,0);
    addEdge(adj1,2,0);
    addEdge(adj1,2,3);
    addEdge(adj1,2,4);
    std::vector<int>res1=dfs(adj);
    std::cout << "dfs  : ";
    for (int i=0;i<V;i++){
        std::cout << res1[i] << " ";
    }

    std::cout << "\n";
    return 0;
}
