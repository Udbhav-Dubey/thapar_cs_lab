#include <bits/stdc++.h>
using namespace std;

class DSU{
public:
    vector<int>parents,ranks;

    DSU(int n){
        parents.resize(n+1);
        ranks.resize(n+1,0);
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
            }
            else if(ranks[ry]>ranks[rx]){
                parents[rx]=ry;
            }
            else{
                parents[ry]=rx;
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

        int x,y;
        cin>>x>>y;

        dsu.unite(x,y);

        map<int,int>comp;

        for(int j=1;j<=n;j++){
            comp[dsu.find(j)]++;
        }

        vector<int>sizes;

        for(auto &p:comp){
            sizes.push_back(p.second);
        }

        sort(sizes.begin(),sizes.end());

        for(int s:sizes){
            cout<<s<<" ";
        }

        cout<<"\n";
    }
}
