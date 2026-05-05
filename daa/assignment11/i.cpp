#include <bits/stdc++.h>
using namespace std;
class A{
    int n;
    vector<int>x;
    vector<vector<int>>G;
    public:
    A(int n):n{n}{
        G.assign(n,vector<int>(n,0));
        x.assign(n,0);
        x[0]=0;
    }
      void addEdge(int u,int v){
        G[u][v]=G[v][u]=1;
        }
    void printsol(){
        cout << "hamiltonian cycle : ";
        for (int i=0;i<n;i++){
            cout << x[i] << " ";
        }
        cout << "\n";
    }
    void printGraph() {
    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << G[i][j] << " ";
        }
        cout << endl;
    }
}
        void Hamiltonian(int k){
            while(true){
                nextvalue(k);
                if (x[k]==0){return ;}
                if (k==n-1){
                    printsol();
                    break;
                }
                else Hamiltonian(k+1);
            }
        }
        void nextvalue(int k){
            while(true){
                x[k]=(x[k]+1)%(n);
                if (x[k]==0){return ;}
                if (G[x[k-1]][x[k]]!=0){
                    int j;
                    for (j=0;j<k;j++){
                        if (x[j]==x[k]){break;}
                    }
                    if (j==k){
                        if (k<n-1){return ;}
                        if (k==n-1&&G[x[k]][x[0]]!=0&&x[1]<x[n-1]){return ;}
                    }
                }
            }
        }
};
int main() {
    int n = 5;
    A obj(n);
    obj.addEdge(0, 1);
    obj.addEdge(0, 3);
    obj.addEdge(1, 2);
    obj.addEdge(1, 3);
    obj.addEdge(1, 4);
    obj.addEdge(2, 4);
    obj.addEdge(3, 4);
    obj.printGraph();
    obj.Hamiltonian(1);
    return 0;
}
