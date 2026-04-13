#include <bits/stdc++.h>
using namespace std;
class STRING {
    string s;
    public:
    STRING(string str=""):s{str} {}
    bool operator==(STRING str){
        return str,s==s;
    }
    STRING operator+(STRING str){
        return STRING{str.s+s};
    }
    void show(){
        cout << s << "\n";
    }
};
int main (){
    STRING s1{"string 1"},s3;
    STRING s2{"string 2"};
    s3=s2+s1;
    if (s1==s2){cout << "string are equal\n";}
    cout << "on + : ";
    s3.show() ;
return 0;
}
