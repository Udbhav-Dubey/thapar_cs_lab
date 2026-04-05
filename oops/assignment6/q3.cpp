#include <cmath>
#include <iostream>
using namespace std;
int area(int l){
    return (1.71 * l * l )/4;
}
int area(int l,int b){
    return (b*l)/2;
}
int area(int l1,int l2,int l3){
    if (l1!=l2){cout << "not an isoceles \n";return 0;}
   int height=sqrt((l1*l1)-(l3*l3/4));
   return 0.5*l2*height;
}
int main (){
     float base1 = 6, height1 = 4;     
    float side = 5;                   
    float equalSide = 5, base2 = 6;   
    cout << "Right-angled Triangle Area = " 
         << area(base1, height1) << endl;
    cout << "Equilateral Triangle Area = " 
         << area(side) << endl;
    cout << "Isosceles Triangle Area = " 
         << area(equalSide,equalSide,base2) << endl;
        cout << "Isosceles Triangle Area = " 
         << area(equalSide,base2,side) << endl;
    return 0;
}
