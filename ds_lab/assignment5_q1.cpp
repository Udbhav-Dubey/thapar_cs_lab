// 1. Write a menu driven program with 4 options (Push, Pop, Display, and Exit) to demonstrate the working of stacks using arrays.

#include <bits/stdc++.h>
using namespace std;
#define MAX 100

struct StackArr{
    int arr[MAX];
    int top;
    StackArr() { top = -1; }
    void push(int val){
        if(top == MAX-1) cout << "Stack Overflow\n";
        else arr[++top] = val;
    }
    void pop(){
        if(top == -1) cout << "Stack Underflow\n";
        else cout << "Popped: " << arr[top--] << "\n";
    }
    void display(){
        if(top == -1) cout << "Stack Empty\n";
        else {
            for(int i=top;i>=0;i--)
                cout << arr[i] << " ";
            cout << "\n";
        }
    }
};

int main(){
    StackArr st;
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

