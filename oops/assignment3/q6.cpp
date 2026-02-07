#include <iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    A(int val):a{val}{}
    friend int adding(A&obja,B&objb);
};
class B{
    int b;
    public:
    B(int val):b{val}{}
    friend int adding(A&obja,B&objb);
};
int adding(A&obja,B&objb){
    return obja.a+objb.b;
}
int main (){
    A a(14);
    B b(19);
    std::cout << "adding both : " << adding(a,b) << "\n";
return 0;
}
