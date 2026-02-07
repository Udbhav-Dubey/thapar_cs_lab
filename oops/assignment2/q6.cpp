#include <iostream>
using namespace std;
class A{
    static int val;
public:
    static void getVal(){
        cout << "val : " << val << "\n";
    }
    static void setVal(int x){
        val=x;
    }
};
int A::val=3;
int main (){
    A::setVal(5);
    A::getVal();
    return 0;
}
