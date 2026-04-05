#include <bits/stdc++.h>
using namespace std;

class DSU{
public:
    vector<int>parents;
    vector<int>ranks;
    vector<int>sz;

    DSU(int n){
        parents.resize(n+1);
        ranks.resize(n+1,0);
        sz.resize(n+1,1);
        for(int i=1;i<=n;i++){
            parents[i]=i;
        }
    }

    int find(int x){
        if(parents[x]!=x){
            parents[x]=find(parents[x]);
        }
        return parents[x];
    }

    void unite(int x,int y){
        int rx=find(x);
        int ry=find(y);

        if(rx!=ry){
            if(ranks[rx]>ranks[ry]){
                parents[ry]=rx;
                sz[rx]+=sz[ry];
            }
            else if(ranks[ry]>ranks[rx]){
                parents[rx]=ry;
                sz[ry]+=sz[rx];
            }
            else{
                parents[ry]=rx;
                sz[rx]+=sz[ry];
                ranks[rx]++;
            }
        }
    }
};

int main(){

    int n,m;
    cin>>n>>m;

    DSU dsu(n);

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        dsu.unite(u,v);
    }

    map<int,int>comp;

    for(int i=1;i<=n;i++){
        int r=dsu.find(i);
        comp[r]++;
    }

    cout<<comp.size()<<"\n";

    for(auto &x:comp){
        cout<<x.second<<" ";
    }

    return 0;
}
