#include <iostream>
#include <vector>
using namespace std;
class Rectangle{
    int len;
    int breadth;
    public:
    Rectangle(int l=0,int b=0):len{l},breadth{b}{}
    int getarea() const{
        return len*breadth;
    }
~Rectangle(){
    cout << "destructor\n";
}
};
int main (){
    Rectangle recarr[3]={Rectangle(),Rectangle(12,15),Rectangle(10,10)};
    for (auto rec:recarr){
        cout << rec.getarea() <<"\n"; 
    }
    return 0;
}
