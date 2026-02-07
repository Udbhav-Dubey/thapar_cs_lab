#include <iostream>
using namespace std;
class Rectangle{
    int len;
    int breadth;
    public:
    Rectangle(){
        len=0;
        breadth=0;
    }
    Rectangle(int l,int b):len{l},breadth{b}{}
    Rectangle(int side){
        len=side;
        breadth=side;
    }
    int givearea()const{
        return len*breadth;
    }

};
int main (){
    Rectangle Rec1;
    cout << Rec1.givearea() << "\n";
    Rectangle rec2(12,15);
    cout << rec2.givearea() << "\n";
    Rectangle rec3(10);
    cout << rec3.givearea() << "\n";
    return 0;
}
