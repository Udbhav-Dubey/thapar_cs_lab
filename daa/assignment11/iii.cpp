#include <bits/stdc++.h>
using namespace std;
class Graph {
    int n;
    vector<vector<int>> adj;
public:
    Graph(int n) : n(n) {
        adj.resize(n);
    }
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void dfs(int v, vector<bool>& visited) {
        visited[v] = true;
        for (int u : adj[v]) {
            if (!visited[u])
                dfs(u, visited);
        }
    }
    bool isConnected() {
        vector<bool> visited(n, false);
        int start = -1;
        for (int i = 0; i < n; i++) {
            if (!adj[i].empty()) {
                start = i;
                break;
            }
        }
        if (start == -1) return true;
        dfs(start, visited);
        for (int i = 0; i < n; i++) {
            if (!adj[i].empty() && !visited[i])
                return false;
        }
        return true;
    }
    bool hasEulerTrail() {
        if (!isConnected()) return false;
        int odd = 0;
        for (int i = 0; i < n; i++) {
            if (adj[i].size() % 2 != 0)
                odd++;
        }
        return (odd == 0 || odd == 2);
    }
void printGraph() {
    cout << "Adjacency List:\n";
    for (int i = 0; i < n; i++) {
        cout << i << " -> ";
        for (int u : adj[i]) {
            cout << u << " ";
        }
        cout << endl;
    }
}
    bool hasEulerCircuit() {
        if (!isConnected()) return false;

        for (int i = 0; i < n; i++) {
            if (adj[i].size() % 2 != 0)
                return false;
        }
        return true;
    }
};
int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(0, 3);
    g.addEdge(3, 4);
    g.printGraph();
    if (g.hasEulerTrail())
        cout << "Graph has Eulerian Trail\n";
    else
        cout << "No Eulerian Trail\n";

    if (g.hasEulerCircuit())
        cout << "Graph has Eulerian Circuit\n";
    else
        cout << "No Eulerian Circuit\n";

    return 0;
}
