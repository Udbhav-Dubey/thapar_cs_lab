#include <iostream>
class A{
    int val{};
    public:
    A(int x){
        val=x;
    }
    void display(){
        std::cout << val<<"\n";
    }
    int getter(){
        return val;
    }
    void setter(int v){
           val=v;
    }
};
A adder_10(A &a){
    int x=a.getter();
    x+=10;
    a.setter(x);
    return a;
}
void adder_7(A a){
   int x=a.getter();
   x+=7;
   a.setter(x);
   std::cout << "value of a in adder_7 by value: ";
   a.display();
}
int main(){
    A a(5);
    std::cout << "value of a : ";
    a.display();
    a=adder_10(a);
    std::cout << "value of a after adder_10 by refrence : ";
    a.display();
    adder_7(a);
    std::cout << "value of a after adder_7 by value : ";
    a.display();
    return 0;
}
