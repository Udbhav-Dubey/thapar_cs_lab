#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        if (s.size()==1){return false;}
        stack<int>stk;
        for (auto ch : s){
            if (ch=='(' || ch =='{' ||ch=='['){
                stk.push(ch);
            }
            else{ 
                if (stk.empty()){return false;}
                char top=stk.top();
            stk.pop();
            if ((ch==')' && top!='(')||(ch=='}'&&top!='{')||(ch==']'&&top!='[')){return false;}
        }
        }
        return true;
    }
};
