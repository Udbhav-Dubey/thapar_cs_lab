#include <bits/stdc++.h>
using namespace std;
class A{
    private:
        string privdata{"private"};
    public:
        string pubdata{"public"};
    protected:
        string procdata{"protected"};
};
class B:public A{
    public:
    void show(){
    cout << "publicly derived class : \n";
    cout << pubdata << "\n";
    cout << procdata << "\n";
    }
};
class C:protected A{
    public:
        void show(){
        cout << "protected derived class : \n";
        cout <<  pubdata << "\n";
        cout << procdata<<"\n";
        }
};
class D:private A{
    public:
        void show(){
            cout <<"private derived class : \n";
            cout << pubdata << "\n";
            cout << procdata << "\n";
//            cout << privdata << "\n";
        }
};
int main (){
    B b;
    b.show();
    C c;
    c.show();
    D d;
    d.show();
}
