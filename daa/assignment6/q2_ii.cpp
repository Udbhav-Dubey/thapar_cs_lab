#include <bits/stdc++.h>
using namespace std;
bool dfs(int node,vector<vector<int>>&adj,vector<bool>&visited,vector<bool>&dfspath){
    visited[node]=1;
    dfspath[node]=1;
    for (int n:adj[node]){
        if (!visited[n]&&dfs(n,adj,visited,dfspath)){
            return true;
        }
        else if (dfspath[n]){
            return true;
        }
    }
    dfspath[node]=false;
    return false;
}
bool cycle(int n,vector<vector<int>>&adj){
    vector<bool>visited(n,0);
    vector<bool>dfspath(n,0);
    for (int i=0;i<n;i++){
        if (!visited[i]){
            if (dfs(i,adj,visited,dfspath)){
                return true;
            }
        }
    }
        return false;
    }
int main (){
    int n=4;
    vector<vector<int>>adj(n);
    adj[0]={1};
    adj[1]={2};
    adj[2]={0};
    adj[3]={};
    if (cycle(n,adj)){
        cout << "cycle exists\n";
    }
    else {cout << "no cycle\n";}
return 0;
}
