#include<bits/stdc++.h>
using namespace std;
class X{
private:
    char str1[100];
public:
    X(){
        cout<<"enter string 1:\n";
        cin>>str1;
    }
    char* getX(){
        return str1;
    }
    void displayX(){
        cout<<"string 1 : "<<str1<<"\n";
    }
    ~X(){
        cout<<"X destructor called\n";
    }
};
class Y{
private:
    char str2[100];
public:
    Y(){
        cout<<"enter string 2:\n";
        cin>>str2;
    }
    char* getY(){
        return str2;
    }
    void displayY(){
        cout<<"string 2 : "<<str2<<"\n";
    }
    ~Y(){
        cout<<"Y destructor called\n";
    }
};
class Z:public X,public Y{
private:
    char str3[200];
public:
    Z(){
        strcpy(str3,"");
    }
    void concat(){
        strcpy(str3,getX());
        strcat(str3,getY());
    }
    void displayZ(){
        displayX();
        displayY();
        cout<<"concatenated string : "<<str3<<"\n";
    }
    ~Z(){
        cout<<"Z destructor called\n";
    }
};
int main(){
    Z z;
    z.concat();
    cout<<"\nresult:\n";
    z.displayZ();
    return 0;
}
