#include <iostream>
using namespace std;
class A{
    public:
        static const  int x=10;
};
int x=100;
int main (){
    int x=1000;
    std::cout << "local x : " << x << "\n";
    std::cout << "global x : " << ::x  <<"\n";
    std::cout << "A's x : " <<A::x << "\n";
    return 0;
}

