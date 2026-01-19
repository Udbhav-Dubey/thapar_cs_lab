#include <iostream>
using namespace std;
int main(){
    int tc;
    cout << "enter the temperature in Celsius : ";
    cin>>tc;
    cout << "Temp in Fahrenheit is : " << (((9*tc)/5)+32) << endl;
    return 0;
}
