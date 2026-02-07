#include <iostream>
class A{
    private:
        int val{};
    public:
        void setval(int x);
        int getval();
        static const  int y=5;
};
void A::setval(int x){
    val=x;
}
int A::getval(){
    return val;
}
int x=100;
int main (){
    int x=10;
    std::cout << "x from main : "<< x << "\n";
    std::cout << "x from global : " << ::x << "\n";
    std::cout << "accessing static " << A::y << "\n";
    return 0;
}
