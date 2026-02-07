#include <iostream>
using namespace std;
inline int cube(int &n){
    return n*n*n;
}
int main (){
    int n;
    cout << "enter a number : ";
    cin >>n;
    cout << "cube of " << n << " is " << cube(n) << endl; 
    return 0;
}
