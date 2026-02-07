#include <bits/stdc++.h>
using namespace std;
#define MAX 100
struct Stack{
    int arr[MAX];
    int top;
    Stack(){
        top=-1;
    }
    void push(int key){
        if(top==MAX-1){cout << "Stack Overflow\n";}
        else arr[++top]=key;
    }
    void pop(){
        if(top==-1){cout << "underflow\n";}
        else top--;
    }
    void display(){
    if(top == -1){
        cout << "stack empty\n";
        return;
    }

    for(int i = 0; i <= top; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

};
int main (){
   Stack st;
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
