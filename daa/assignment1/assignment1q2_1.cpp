#include <bits/stdc++.h>
using namespace std;
struct Node{
        int data;
        Node*next;
        Node(int key){
            key=data;
            next=nullptr;
        }
};
struct stackll{
    Node*top;
    stackll(){top=nullptr;}
    void push(int key){
        Node* newnode=new Node(key);
        newnode->next=top;
        top=newnode;
    }
    void pop(){
        if (top==nullptr){
            cout << "stack underflow\n";
        }
        else {
            cout << "popped: " << top->data << "\n";
            Node*temp=top;
            top=top->next;
            delete temp;
        }
    }
    void display(){
        if (top==nullptr){cout << "stack empty\n";}
        else{
            Node*curr=top;
            while(curr){
                cout << curr->data << " ";
                curr=curr->next;
            }
            cout << "\n";
        }
    }
};
int main (){
    stackll st;
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
