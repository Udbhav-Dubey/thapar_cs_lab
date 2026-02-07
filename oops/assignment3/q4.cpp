#include <iostream>
using namespace std;
class A{
    int a;
    public:
        A(int a=10){
            this->a=a;
        }
        int getval()const{
            return a;
        }
        void setval(int val){
            this->a=val;
        }
};
int main (){
    A a;
    A* a_ptr=&a;
    std::cout << a.getval()<<"\n";
    a_ptr->setval(100);
    std::cout << a_ptr->getval() << "\n";

}
