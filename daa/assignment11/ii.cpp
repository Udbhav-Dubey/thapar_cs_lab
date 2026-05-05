#include <bits/stdc++.h>
using namespace std;
class Graph {
    int n;
    vector<int> x;
    vector<vector<int>> G;
    bool found;
public:
    Graph(int n) : n(n), found(false) {
        G.assign(n, vector<int>(n, 0));
        x.assign(n, -1);
    }
    void addEdge(int u, int v) {
        G[u][v] = G[v][u] = 1;
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
    void nextValue(int k) {
        while (true) {
            x[k] = (x[k] + 1) % n;
            if (x[k] == -1) return;  
            if (G[x[k - 1]][x[k]] != 0) {
                int j;
                for (j = 0; j < k; j++) {
                    if (x[j] == x[k]) break; 
                }
                if (j == k) {
                    return; 
                }
            }
        }
    }
    void hamiltonian(int k) {
        if (found) return;
        while (true) {
            nextValue(k);
            if (x[k] == -1) return;
            if (k == n - 1) {
                found = true;
                return;
            } else {
                hamiltonian(k + 1);
            }

            if (found) return;
        }
    }
    bool isTraceable() {
        for (int i = 0; i < n; i++) {
            fill(x.begin(), x.end(), -1);
            x[0] = i;             
            hamiltonian(1);

            if (found) return true;
        }
        return false;
    }
};
int main() {
    int n = 4;
    Graph g(n);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);
    g.printGraph();
    if (g.isTraceable())
        cout << "Graph is Traceable (Hamiltonian Path exists)\n";
    else
        cout << "Graph is NOT Traceable\n";
    return 0;
}
