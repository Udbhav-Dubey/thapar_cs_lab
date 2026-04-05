#include <bits/stdc++.h>
using namespace std;
void dfs(int node,vector<vector<int>>&adj,vector<bool>&visited,vector<int>&comp){
    visited[node]=true;
    comp.push_back(node);
    for (int n:adj[node]){
        if (!visited[n]){
            dfs(n,adj,visited,comp);
        }
    }
}
int main (){
    int n=6;
    vector<vector<int>>adj(n);
    adj[0] = {1};
    adj[1] = {0, 2};
    adj[2] = {1};
    adj[3] = {2,4};
    adj[4] = {3};
    adj[5] = {};
    vector<bool>visited(n,false);
    cout << "Connected : ";
    for (int i=0;i<n;i++){
        if (!visited[i]){
            vector<int>comp;
            dfs(i,adj,visited,comp);
            for (int n:comp){
                cout << n << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
