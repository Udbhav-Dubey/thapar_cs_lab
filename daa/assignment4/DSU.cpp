#include <bits/stdc++.h>
using namespace std;
class graph{
    public:
    int V,E;
    vector<pair<int,int>>edges;
    graph(int v,int e){
        V=v;
        E=e;
    }
    void addedge(int u,int v){
        edges.push_back({u,v});
    }
    friend class DSU;
};
class DSU{
public:
    vector<int>parents;
    vector<int>ranks;
    DSU(int n){
    parents.resize(n+1);
    ranks.resize(n+1,0);
    for (int i=0;i<=n;i++){
        parents[i]=i;
    }
    }
    int find(int x){
        if (parents[x]!=x){
             parents[x]=find(parents[x]);
        }
        return parents[x];
    }
    void unite(int x,int y){
        int rx=find(x);
        int ry=find(y);
        if (rx!=ry){
            if (ranks[rx]>ranks[ry]){
                parents[ry]=rx;
            }
            else if (ranks[ry]>ranks[rx]){
                parents[rx]=ry;
            }
            else {
                parents[ry]=rx;
                ranks[rx]++;
            }
        }
    }
    void display(){
        for (int i=0;i<parents.size();i++){
            cout << "Node " << i << " is represented by " << parents[i] << "\n";
        }
    }
};
int main (){
    cout << "enter the total number of vertices : \n";
    int n;
    cin>>n;
    DSU dsu(n);
    bool flag=1;
    while(flag){
        cout << "1.unite 2 elements : \n";
        cout << "2.find elements representative : \n";
        cout << "3. display all representatives  : \n";
        cout << "4.exit\n";
        int x;
        cin>>x;
        switch(x){
        case 1: {
            int el1,el2;
            cout << "enter node1 : " ; 
            cin >> el1 ; 
            cout << "enter node 2 : ";
            cin >> el2;
            dsu.unite(el1,el2);
            cout << "united\n";
            break;
                }
        case 2:
            cout << "enter node  : \n";
            int node1;
            cin>>node1;
            cout << "representative is " << dsu.find(node1) << "\n";
            break;
        case 3:
            dsu.display();
            break;
        case 4:
            flag=0;
        }
    }
    return 0;
}
