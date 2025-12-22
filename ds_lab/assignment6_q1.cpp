// 1. Write a menu driven program with 4 options (Insert, Delete, Display, and Exit) to demonstrate the working of Queues using linked-list.

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int d){ data=d; next=nullptr; }
};

struct QueueLL {
    Node* front;
    Node* rear;
    QueueLL() { front = rear = nullptr; }

    void insert(int val) {
        Node* newnode = new Node(val);
        if (rear == nullptr) {
            front = rear = newnode;
        } else {
            rear->next = newnode;
            rear = newnode;
        }
    }
    void deleteq() {
        if(front == nullptr) {
            cout << "Queue Underflow\n";
            return;
        }
        cout << "Deleted: " << front->data << "\n";
        Node* temp = front;
        front = front->next;
        if(front == nullptr) rear = nullptr;
        delete temp;
    }
    void display() {
        if(front == nullptr) cout << "Queue Empty\n";
        else {
            Node* curr = front;
            while(curr) {
                cout << curr->data << " ";
                curr = curr->next;
            }
            cout << "\n";
        }
    }
};

int main() {
    QueueLL q;
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

