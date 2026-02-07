#include <iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    A(int val):a{val}{};
    friend class B;
};
class B{
    public:
        int add10(A obj){
            return obj.a+10;
        }
};
int main (){
    A a(100);
    B b;
    cout << b.add10(a) << "\n";
    return 0;
}
