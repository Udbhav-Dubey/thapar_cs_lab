#include <bits/stdc++.h>
using namespace std;
class Student{
    protected:
        string name;
    public:
        Student(string n):name{n}{};
        virtual void discipline()=0;
};
class Engineering : public Student{
    public:
        Engineering(string n):Student(n){};
        void discipline()override{
            cout << name << "is in engineering\n";
        }
};
class Medicine:public Student{
     public:
         Medicine(string n):Student(n){};
        void discipline()override{
            cout << name << "is in medicine \n";
        }
};
class Science:public Student{
      public:
          Science(string n):Student(n){};
        void discipline()override{
            cout << name << "is in science\n";
        }
};

int main (){
    Student* stu[3];
    stu[0]=new Engineering("A");
    stu[1]=new Medicine("B");
    stu[2]=new Science("C");
    for (int i=0;i<3;i++){
        stu[i]->discipline();
    }
    for (auto s:stu){
        delete s;
    }
return 0;
}
