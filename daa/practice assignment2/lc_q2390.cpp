class Solution {
public:
    string removeStars(string s) {
        stack<char>stk;
        for (char c:s){
            if (c=='*'&&stk.empty()){continue;}
            if (c=='*'&&!stk.empty()){
                stk.pop();
            }
            else stk.push(c);
        }
        string ans;
        while(!stk.empty()){
            char t=stk.top();
            stk.pop();
            ans.push_back(t);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
