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
int main(){
    square sq(10);
    cout << sq.val()<<"\n";
    return 0;
}
