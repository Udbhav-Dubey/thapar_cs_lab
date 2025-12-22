// 3. Write a program to convert infix expression into postfix expression using stack

#include <bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c=='^') return 3;
    if(c=='*'||c=='/') return 2;
    if(c=='+'||c=='-') return 1;
    return -1;
}

string infixToPostfix(string s){
    string ans="";
    stack<char> st;
    for(char c:s){
        if(isalnum(c)) ans+=c;
        else if(c=='(') st.push(c);
        else if(c==')'){
            while(!st.empty()&&st.top()!='('){
                ans+=st.top(); st.pop();
            }
            if(!st.empty()) st.pop();
        }
        else{
            while(!st.empty()&&prec(st.top())>=prec(c)){
                ans+=st.top(); st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){ ans+=st.top(); st.pop(); }
    return ans;
}

int main(){
    string exp;
    cout << "Enter infix expression: ";
    cin >> exp;
    string postfix = infixToPostfix(exp);
    cout << "Postfix: " << postfix << "\n";
    return 0;
}

