#include <iostream>
using namespace std;
class A{
    private:
        void privatefucntion(){
            cout << "this is a private function\n";
        }
    public:
        void callsprivate(){
            cout << "this function calls private member  ";
            privatefucntion();
            void (A::*ptr)()= &A::privatefucntion;
            (this->*ptr)();
        }
};
int main (){
    A aa;
    aa.callsprivate();
    return 0;
}
