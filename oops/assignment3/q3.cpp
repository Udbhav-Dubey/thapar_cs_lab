#include <iostream>
using namespace std;
class A{
    int a;
    public:
        A(int aa=10):a{aa}{}
    ~A(){
        std::cout << "Destructor\n";
    }
};
int main (){
    A a;
}
