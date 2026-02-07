#include <iostream>
using namespace std;
class A{
    int a;
    int b;
    public:
    A(int a,int b):a{a},b{b}{}
    void prinin(){
        cout << "values : a " << a << " b : " << b << "\n"; 
    }
    friend void swapy(A&obj);
};
void swapy(A&obj){
    int temp=obj.a;
    obj.a=obj.b;
    obj.b=temp;
}
int main (){
    A obj1(10,15);
    obj1.prinin();
    std::cout << "swapping\n";
    swapy(obj1);
    obj1.prinin();
return 0;
}
