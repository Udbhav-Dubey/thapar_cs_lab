#include <iostream>
#include <string>
using namespace std;
class Student{
    private:
        string Name{};
        int roll_number{};
        string Degree{};
        char hostel{};
        float cgpa{};
    public:
        void addDetails(){
            cout << "enter name : " ;
            cin >> Name;
            cout << "enter roll_number : ";
            cin>>roll_number;
            cout << "enter Degree : ";
            cin >> Degree;
            cout << "enter hostel : ";
            cin >> hostel ;
            cout << "enter cgpa : ";
            cin >> cgpa ;
        }
        void updateDetails(){
            cout << "press 1 to update Name\n";
            cout << "press 2 to update Roll_number\n";
            cout << "press 3 to update Degree\n";
            cout << "press 4 to update hostel\n";
            cout << "press 5 to update cgpa\n";
            cout << "press anything else  to quit\n";
            while(true){
                int x;
                cin>>x;
                switch(x){
                case 1:
                    cin>>Name;
                    break;
                case 2:
                    cin>>roll_number;
                    break;
                case 3:
                    cin>>Degree;
                    break;
                case 4:
                    cin>>hostel;
                    break;
                case 5:
                    cin>>cgpa;
                    break;
                default:
                    return;
                }
            }
        }
        void updateCgpa(float cg){
            cgpa=cg;
        }
        void updateHostel(char host){
            hostel=host;
        }
        void displaydetails(){
            cout << "Name : " << Name << "\n";
            cout << "Roll Number : " << roll_number << "\n";
            cout << "Degree : " << Degree << "\n";
            cout << "Hostel : " << hostel << "\n";
            cout << "cgpa : " << cgpa << "\n";
        }
};
int main (){
     Student s1;
     s1.addDetails();
     s1.updateCgpa(7.8);
     s1.updateHostel('A');
     s1.displaydetails();
     s1.updateDetails();
     s1.displaydetails();
    return 0;
}
