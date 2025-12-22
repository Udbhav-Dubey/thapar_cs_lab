// 2. Write a menu driven program with 4 options (Insert, Delete, Display, and Exit) to demonstrate the working of Circular Queues (arrays).

#include <bits/stdc++.h>
using namespace std;
#define MAX 100

struct CircularQueue {
    int arr[MAX];
    int front, rear, size;
    CircularQueue(int sz=5){ size=sz; front=rear=-1; }

    void insert(int val) {
        if((front==0 && rear==size-1) || (rear==(front-1)%(size-1))) {
            cout << "Queue Overflow\n";
            return;
        }
        if(front==-1) {
            front=rear=0;
        } else if(rear==size-1 && front!=0) {
            rear=0;
        } else {
            rear++;
        }
        arr[rear]=val;
    }
    void deleteq() {
        if(front==-1) {
            cout << "Queue Underflow\n";
            return;
        }
        cout << "Deleted: " << arr[front] << "\n";
        if(front==rear) {
            front=rear=-1;
        } else if(front==size-1) {
            front=0;
        } else {
            front++;
        }
    }
    void display() {
        if(front==-1) cout << "Queue Empty\n";
        else {
            int i=front;
            cout << "Queue: ";
            while(1) {
                cout << arr[i] << " ";
                if(i==rear) break;
                i=(i+1)%size;
            }
            cout << "\n";
        }
    }
};

int main() {
    int qsize;
    cout << "Enter circular queue size (up to 100): ";
    cin >> qsize;
    CircularQueue q(qsize);
    int ch, val;
    while(1) {
        cout << "1.Insert 2.Delete 3.Display 4.Exit\nEnter choice: ";
        cin >> ch;
        if(ch==1) {
            cout << "Enter value: "; cin >> val;
            q.insert(val);
        } else if(ch==2) q.deleteq();
        else if(ch==3) q.display();
        else if(ch==4) break;
        else cout << "Invalid!\n";
    }
    return 0;
}

