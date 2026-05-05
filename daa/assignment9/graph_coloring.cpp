#include <bits/stdc++.h>
using namespace std;
class Graph{
    private:
        int n,m;
        vector<vector<int>>G;
        vector<int>x;
    public:
        Graph(int n,int m):n(n),m(m){
            G.assign(n,vector<int>(n,0));
            x.assign(n,0);
        }
        void addEdge(int u,int v){
            G[u][v]=G[v][u]=1;
        }
        void input(){
            for (int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout << G[i][j] << " ";
                }
                cout << "\n";
            }
        }
        void printsol(){
            for (int i=0;i<n;i++){
                cout << x[i] << " ";
            }
            cout << "\n";
        }
        void mcoloring(int k){
            while(true){
                nextval(k);
                if (x[k]==0){return ;}
                if (k==n-1){
                    printsol();
                }
                else {
                    mcoloring(k+1);
                }
            }
        }
        void nextval(int k){
            while(true){
            x[k]=(x[k]+1)%(m+1);
            if (x[k]==0){
                return ;
            }
            int j=0;
            for (j=0;j<n;j++){
                if (G[k][j]==1&&x[k]==x[j]){break;}
            }
            if (j==n){return ;}
        }
        }
};
int main() {
    int n = 4; // vertices
    int m = 3; // colors

    Graph g(n, m);

    // Example graph
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    cout << "graph ->> \n";
    g.input();    
    cout << "coloring \n";
    g.mcoloring(0);

    return 0;
}
