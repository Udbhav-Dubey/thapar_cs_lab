#include<iostream>
using namespace std;
class A{
    int* nptr;
    public:
        A(int n){
            nptr=new int[n];
            std::cout << "memory allocation\n";
        }
        ~A(){
            std::cout << "memory deallocation\n";
            delete[](nptr);
        }
};
int main (){
    A a(4);
    return 0;
}
