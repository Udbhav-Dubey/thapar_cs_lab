// 4. Write a program to evaluate a postfix expression using stack.

#include <bits/stdc++.h>
using namespace std;

int eval(string exp){
    stack<int> st;
    for(char c:exp){
        if(isdigit(c)) st.push(c-'0');
        else {
            int v2 = st.top(); st.pop();
            int v1 = st.top(); st.pop();
            switch(c){
                case '+': st.push(v1+v2); break;
                case '-': st.push(v1-v2); break;
                case '*': st.push(v1*v2); break;
                case '/': st.push(v1/v2); break;
                case '^': st.push(pow(v1,v2)); break;
            }
        }
    }
    return st.top();
}

int main(){
    string exp;
    cout << "Enter postfix expression (single digit operands): ";
    cin >> exp;
    cout << "Evaluated result: " << eval(exp) << "\n";
    return 0;
}

