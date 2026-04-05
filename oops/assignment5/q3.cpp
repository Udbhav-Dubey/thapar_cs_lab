#include<bits/stdc++.h>
using namespace std;
class A{
protected:
    int x;
public:
    A(){
        cout<<"enter value of x:\n";
        cin>>x;
    }
    void displayA(){
        cout<<"value of x : "<<x<<"\n";
    }
    ~A(){
        cout<<"A destructor called\n";
    }
};
class B:virtual public A{
protected:
    int y;
public:
    B(){
        cout<<"enter value of y:\n";
        cin>>y;
    }
    void displayB(){
        cout<<"value of y : "<<y<<"\n";
    }
    ~B(){
        cout<<"B destructor called\n";
    }
};
class C:virtual public A{
protected:
    int z;
public:
    C(){
        cout<<"enter value of z:\n";
        cin>>z;
    }
    void displayC(){
        cout<<"value of z : "<<z<<"\n";
    }
    ~C(){
        cout<<"C destructor called\n";
    }
};
class D:public B,public C{
private:
    int total;
public:
    D(){
        total=0;
    }
    void calculate(){
        total=x+y+z;
    }
    void displayD(){
        displayA();
        displayB();
        displayC();
        cout<<"total : "<<total<<"\n";
    }
    ~D(){
        cout<<"D destructor called\n";
    }
};
int main(){
    D d;
    d.calculate();
    cout<<"\nresult:\n";
    d.displayD();
    return 0;
}
