#include <bits/stdc++.h>
using namespace std;
class DSU{
    int n;
    vector<int>parent;
    vector<int>ranks;
    public:
    DSU(int x){
        n=x;
    parent.resize(n+1);
    ranks.resize(n+1,0);
    for (int i=0;i<=n;i++){
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
        if (rx==ry){return ;}
        if (ranks[rx]>ranks[ry]){
            parent[ry]=rx;
        }
        else if (ranks[ry]>ranks[rx]){
            parent[rx]=ry;
        }
        else {
            parent[ry]=rx;
            ranks[rx]++;
        }
    }
};
int kruskal(int n,vector<vector<int>>edges){
    sort(edges.begin(),edges.end(),[](auto &a,auto &b){return a[2]<b[2];});
    DSU dsu(n);
    int tw{};
    vector<vector<int>>connected;
    for (auto e:edges){
        int u=e[0];
        int v=e[1];
        int w=e[2];
        if (dsu.find(u)!=dsu.find(v)){
            dsu.unite(u,v);
            tw+=w;
            connected.push_back(e);
        }
    }
    cout << "edges in spaning tree : \n";
    for (auto e:connected){
        cout << e[0] << "--" << e[1] << "and w = " << e[2] << "\n";
    }
    return tw;
}
int main(){
    vector<vector<int>>edges = {
        {1, 2, 1},
        {1, 4, 2},
        {2, 4, 3},
        {1, 3, 4},
        {3, 4, 5}
    };
    int n = 4; 
    int result = kruskal(n,edges);
    cout << "mst weight = " << result << "\n";
    return 0;
}

