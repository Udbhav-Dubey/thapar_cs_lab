#include <iostream>
using namespace std;

void printResult(string name, int allocation[], int n) {
    cout << "\n" << name << " Allocation:\n";
    for(int i = 0; i < n; i++) {
        cout << "Process " << i+1 << " -> ";
        if(allocation[i] != -1)
            cout << "Block " << allocation[i]+1;
        else
            cout << "Not Allocated";
        cout << endl;
    }
}

// ---------------- FIRST FIT ----------------
void firstFit(int blockSize[], int m, int processSize[], int n) {
    int allocation[10];

    for(int i = 0; i < n; i++)
        allocation[i] = -1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(blockSize[j] >= processSize[i]) {
                allocation[i] = j;
                blockSize[j] -= processSize[i];
                break;
            }
        }
    }

    printResult("First Fit", allocation, n);
}

// ---------------- BEST FIT ----------------
void bestFit(int blockSize[], int m, int processSize[], int n) {
    int allocation[10];

    for(int i = 0; i < n; i++)
        allocation[i] = -1;

    for(int i = 0; i < n; i++) {
        int bestIdx = -1;

        for(int j = 0; j < m; j++) {
            if(blockSize[j] >= processSize[i]) {
                if(bestIdx == -1 || blockSize[j] < blockSize[bestIdx])
                    bestIdx = j;
            }
        }

        if(bestIdx != -1) {
            allocation[i] = bestIdx;
            blockSize[bestIdx] -= processSize[i];
        }
    }

    printResult("Best Fit", allocation, n);
}

// ---------------- WORST FIT ----------------
void worstFit(int blockSize[], int m, int processSize[], int n) {
    int allocation[10];

    for(int i = 0; i < n; i++)
        allocation[i] = -1;

    for(int i = 0; i < n; i++) {
        int worstIdx = -1;

        for(int j = 0; j < m; j++) {
            if(blockSize[j] >= processSize[i]) {
                if(worstIdx == -1 || blockSize[j] > blockSize[worstIdx])
                    worstIdx = j;
            }
        }

        if(worstIdx != -1) {
            allocation[i] = worstIdx;
            blockSize[worstIdx] -= processSize[i];
        }
    }

    printResult("Worst Fit", allocation, n);
}

// ---------------- MAIN ----------------
int main() {
    int m, n;

    cout << "Enter number of memory blocks: ";
    cin >> m;

    int blockSize[10];
    cout << "Enter sizes of blocks:\n";
    for(int i = 0; i < m; i++)
        cin >> blockSize[i];

    cout << "Enter number of processes: ";
    cin >> n;

    int processSize[10];
    cout << "Enter sizes of processes:\n";
    for(int i = 0; i < n; i++)
        cin >> processSize[i];

    // Create copies so original data remains unchanged
    int b1[10], b2[10], b3[10];
    for(int i = 0; i < m; i++) {
        b1[i] = b2[i] = b3[i] = blockSize[i];
    }

    // Run all algorithms
    firstFit(b1, m, processSize, n);
    bestFit(b2, m, processSize, n);
    worstFit(b3, m, processSize, n);

    return 0;
}
