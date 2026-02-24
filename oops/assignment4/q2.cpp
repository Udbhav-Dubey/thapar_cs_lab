#include <iostream>
using namespace std;
class Numb{
    private:
    int numb{};
    public:
    Numb(int n){
        numb=n;
    }
    int gn(){
        return numb;
    }
};
class square:public Numb{
    public:
    square(int n):Numb(n){};
    long long val(){
        return gn()*gn();
    }
};
class cube:public Numb{
    public:
        cube(int n):Numb(n){};
        long long c_val(){
        return gn()*gn()*gn();
        }
};
int main(){
    int n;
    cout << "enter the number\n";
    cin>> n;
    square sq(n);
    cube cu(n);
    cout << "square : "<< sq.val()<<"\n";
    cout << "cube : "<< cu.c_val() << "\n";
    return 0;
}
