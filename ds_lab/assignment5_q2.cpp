// 2. Write a menu driven program with 4 options (Push, Pop, Display, and Exit) to demonstrate the working of stacks using linked-list.

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d){ data=d; next=nullptr; }
};

struct StackLL{
    Node* top;
    StackLL(){ top=nullptr; }

    void push(int val){
        Node* newnode = new Node(val);
        newnode->next = top;
        top = newnode;
    }
    void pop(){
        if(top == nullptr) cout << "Stack Underflow\n";
        else{
            cout << "Popped: " << top->data << "\n";
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }
    void display(){
        if(top == nullptr) cout << "Stack Empty\n";
        else{
            Node* curr = top;
            while(curr){
                cout << curr->data << " ";
                curr = curr->next;
            }
            cout << "\n";
        }
    }
};

int main(){
    StackLL st;
    int ch, val;
    while(true){
        cout << "1.Push  2.Pop  3.Display  4.Exit\nEnter choice: ";
        cin >> ch;
        if(ch==1){
            cout << "Enter value: "; cin >> val;
            st.push(val);
        }
        else if(ch==2) st.pop();
        else if(ch==3) st.display();
        else if(ch==4) break;
        else cout << "Invalid!\n";
    }
    return 0;
}

