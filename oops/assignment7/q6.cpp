#include <bits/stdc++.h>
using namespace std;
class A{
    int a;
    int b;
    public:
    friend istream& operator>>(istream&in,A &obj);
    friend ostream& operator<<(ostream&out,A &obj);
};
istream& operator>>(istream&in,A &obj){
    cout << "Enter 2 int : " ;
    in>>obj.a >> obj.b ;
    return in;
}
ostream& operator<<(ostream&out,A&obj){
    out << "a== " << obj.a << " b== "<< obj.b << "\n";
    return out;
}
int main (){
    A obj;
    cin >> obj;    
    cout << obj;   
return 0;
}
