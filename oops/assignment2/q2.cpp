#include <iostream>
class Rectangle{
    int l{};
    int b{};
    public:
    Rectangle(int ll,int bb):l{ll},b{bb}{};
    void display(){
        std::cout << "length is " << l << "\n";
        std::cout << "breadth is " << b << "\n";
        std::cout << "Area is " << l*b << "\n\n";
    }
};
int main (){
    Rectangle r1(1,4);
    Rectangle r2(2,3);
    Rectangle r3(10,23);
    Rectangle r4(12,32);
    Rectangle arr[4]={r1,r2,r3,r4};
    for (int i=0;i<4;i++){
        arr[i].display();
    }
return 0;
}

