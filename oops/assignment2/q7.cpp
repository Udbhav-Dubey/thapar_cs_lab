#include <iostream>
using namespace std;
class A{
    private:
        int x;
    public:
        A(int val):x{val}{};
        void show()const {
            cout << "x= " << x << endl;
        }
       // void modify()const{
        //    x +=10;
        //}
        void modify(){
            x+=1;
        }
};
int main (){
    A a(7);
    a.show();
    a.modify();
    a.show();
    return 0;
}
