#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool numer(char &c){
        if (c<'0'||c>'9'){
            return false;
        }
        return true;
    }
    int myAtoi(string s) {
        int number=0;
        bool leed_zero=1;
        bool neg=0;
        int j=0;
        while(j<s.size()&&s[j]==' '){
            j++;
        }
        if (j>=s.size()){return 0;}
        if (s[j]=='-'){neg=1;s[j]='0';j++;}
        else if (s[j]=='+'){neg=0;,j++;}
        for (int i=j;i<=s.size()-1;i++){
            char c=s[i];
            if (numer(c)){
                if (c=='0' && leed_zero==1){
                    continue;
                }
                else{
                leed_zero=0;
                int t=c-'0';
                number=number*10+t;
            }}
            else if (!numer(c)){
                break;
            }
        }
        if (neg && number!=0){return -number ;}
        else return number;
    }
};
int main (){
        string s1="42";
        string s2="   -042";
        string s3="1337c0d3";
        string s4="0-1";
        vector<string>vec={s2};
        Solution sol;
        for (auto &v:vec){
            cout << " test - > " << v << " \n";
            cout << "ans -> " << sol.myAtoi(v) << "\n";
        }
    return 0;
}
