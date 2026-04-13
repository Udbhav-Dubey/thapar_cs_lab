#include <iostream>
#include <vector>
using namespace std;
class BankersAlgorithm {
    int n, m; 
    vector<vector<int>> alloc, max, need;
    vector<int> avail;
public:
    void input() {
        cout << "Enter number of processes: "; cin >> n;
        cout << "Enter number of resource types: "; cin >> m;
        alloc.assign(n, vector<int>(m));
        max.assign(n, vector<int>(m));
        need.assign(n, vector<int>(m));
        avail.assign(m, 0);
        cout << "Enter Allocation Matrix:\n";
        for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin >> alloc[i][j];
        cout << "Enter Max Matrix:\n";
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                cin >> max[i][j];
                need[i][j] = max[i][j] - alloc[i][j];
            }
        }
        cout << "Enter Available Resources: ";
        for(int i=0; i<m; i++) cin >> avail[i];
    }
    bool isSafe() {
        vector<int> work = avail;
        vector<bool> finish(n, false);
        vector<int> safeSeq;
        for (int k = 0; k < n; k++) {
            bool found = false;
            for (int p = 0; p < n; p++) {
                if (!finish[p]) {
                    int j;
                    for (j = 0; j < m; j++)
                        if (need[p][j] > work[j]) break;
                    if (j == m) {
                        for (int i = 0; i < m; i++) work[i] += alloc[p][i];
                        safeSeq.push_back(p);
                        finish[p] = true;
                        found = true;
                    }
                }
            }
            if (!found) break; 
        }

        if (safeSeq.size() == n) {
            cout << "\nSYSTEM IS IN SAFE STATE.\nSafe Sequence: ";
            for (int i = 0; i < n; i++) cout << "P" << safeSeq[i] << (i == n-1 ? "" : " -> ");
            cout << endl;
            return true;
        } else {
            cout << "\nSYSTEM IS IN UNSAFE STATE (Deadlock likely).\n";
            return false;
        }
    }
};
int main() {
    BankersAlgorithm ba;
    int choice;

    while (true) {
        cout << "\n--- Banker's Algorithm Menu ---";
        cout << "\n1. Input Data & Check Safety";
        cout << "\n2. Exit";
        cout << "\nChoice: "; cin >> choice;

        if (choice == 1) {
            ba.input();
            ba.isSafe();
        } else break;
    }
    return 0;
}
