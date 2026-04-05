#include <bits/stdc++.h>
using namespace std;
void dfs(int node,vector<vector<int>>&adj,vector<bool>&visited,stack<int>&st){
    visited[node]=1;
    for (int n:adj[node]){
        if (!visited[n]){
            dfs(n,adj,visited,st);
        }
    }
    st.push(node);
}
void toposort(int n,vector<vector<int>>&adj){
    vector<bool>visited(n,false);
    stack<int>st;
    for (int i=0;i<n;i++){
        if (!visited[i]){
            dfs(i,adj,visited,st);
        }
    }
    cout << "Topo sort : \n";
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}
int main (){
    int n=5;
    vector<vector<int>>adj(n);
    adj[0] = {1, 2, 4};
    adj[1] = {2, 3};
    adj[2] = {4};
    adj[3] = {};
    adj[4] = {};
    toposort(n,adj);
return 0;
}
