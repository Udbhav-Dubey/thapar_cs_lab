#include <bits/stdc++.h>
using namespace std;
class Student{
protected:
    int roll{};
    string name{};
public:
    void GetDetails(){
        cout << "enter roll number \n";
        cin >> roll;
        cout << "enter the name of student\n";
        cin>>name;
    }
    void displayDetails(){
        cout << "Roll number  "<< roll << "\n";
        cout << "Name is " << name << "\n";
    }
};
class Marks:public Student{
protected:
    int subject1{};
    int subject2{};
public:
    void GetMarks(){
        cout << "enter the marks of subject 1: \n";
        cin>>subject1 ;
        cout << "enter the marks of subject 2 : \n";
        cin>>subject2  ;
    }
    void DisplayMarks(){
        cout << "marks of subject 1 : -> " << subject1 <<"\n";
        cout << "marks of subject 2 : -> " << subject2 << "\n";
    };
};
class Result:public Marks{
    private:
        int totalMarks;
    public:
        void calculateResult(){
            totalMarks=subject1+subject2;
        }
        void displayResult(){
            if (totalMarks<68) {
                cout << "failed\n";
            }
            else {
                cout << "Passed\n";
            }
        }
};
int main (){
    cout << "enter the number of students : ";
    int n;
    cin>>n;
    vector<Result>vec(n);
    for(int i=0;i<n;i++){
        vec[i].GetDetails();
        vec[i].GetMarks();
        cout << "\n";
    }
    cout << "result : \n";
    for (int i=0;i<n;i++){
        vec[i].calculateResult();
        vec[i].displayResult();
    }
    return 0;
}
