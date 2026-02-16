#include <bits/stdc++.h>
using namespace std;
class DSU{
public:
    vector<int>parents;
    vector<int>ranks;
    DSU(int n){
    parents.resize(n);
    ranks.resize(n,0);
    for (int i=0;i<n;i++){
        parent[i]=i;
    }
    }
    int find(int x){
        if (parent[x]!=x){
             parent[x]=find(parent[x]);
        }
        return parent[x];
    }
    void unite(int x,int y){
        int rx=find(x);
        int ry=find(y);
        if (rx!=ry){
            if (rank[rx]>rank[ry]){
                parent[ry]=rx;
            }
            else if (rank[ry]>rank[rx]){
                parent[rx]=ry;
            }
            else {
                parent[ry]=rx;
                rank[rx]++;
            }
        }
    }
};
int main (){
    
    return 0;
}
