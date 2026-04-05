#include<bits/stdc++.h>
using namespace std;
class Student{
protected:
    string name;
public:
    virtual void GetData()=0;
    virtual void display()=0;
    virtual ~Student(){
        cout<<"Student destructor called\n";
    }
};
class Science:public Student{
private:
    int marks;
public:
    void GetData(){
        cout<<"enter science student name:\n";
        cin>>name;
        cout<<"enter marks:\n";
        cin>>marks;
    }
    void display(){
        cout<<"Science student : "<<name<<"\n";
        cout<<"marks : "<<marks<<"\n";
    }
    ~Science(){
        cout<<"Science destructor called\n";
    }
};
class Art:public Student{
private:
    int marks;
public:
    void GetData(){
        cout<<"enter art student name:\n";
        cin>>name;
        cout<<"enter marks:\n";
        cin>>marks;
    }
    void display(){
        cout<<"Art student : "<<name<<"\n";
        cout<<"marks : "<<marks<<"\n";
    }
    ~Art(){
        cout<<"Art destructor called\n";
    }
};
class Commerce:public Student{
private:
    int marks;
public:
    void GetData(){
        cout<<"enter commerce student name:\n";
        cin>>name;
        cout<<"enter marks:\n";
        cin>>marks;
    }
    void display(){
        cout<<"Commerce student : "<<name<<"\n";
        cout<<"marks : "<<marks<<"\n";
    }
    ~Commerce(){
        cout<<"Commerce destructor called\n";
    }
};
int main(){
    Student* arr[3];
    arr[0]=new Science();
    arr[1]=new Art();
    arr[2]=new Commerce();
    for(int i=0;i<3;i++){
        arr[i]->GetData();
        cout<<"\n";
    }
    cout<<"result:\n";
    for(int i=0;i<3;i++){
        arr[i]->display();
        cout<<"\n";
    }
    for(int i=0;i<3;i++){
        delete arr[i];
    }
    return 0;
}
