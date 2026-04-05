#include <bits/stdc++.h>
using namespace std;
int main (){
    stack<int>stk;
    stk.push(10);
    stk.push(12);
    stk.push(15);
    cout << stk.top() << "\n";
    stk.pop();
    stack<int>temp=stk;
    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << "\n";
    stk.push(35);
    stk.push(23);
    stk.pop();
    stack<int>temp1=stk;
    while(!temp1.empty()){
        cout << temp1.top() << " ";

        temp1.pop();
    }
    return 0;
}
