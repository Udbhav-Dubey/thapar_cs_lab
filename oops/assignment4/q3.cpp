#include <bits/stdc++.h>
using namespace std;
class Fruit{
    protected:
        int total{};
    public:
        void setTotal(int a,int m){
            total=a+m;
        }
        int getTotal(){
            return total;
        }
};
class Apple:public Fruit{
    int apple;
    public:
    Apple(int n){
        apple=n;
    }
    int getApple(){
        return apple;
    }
    void addtobasket(int x){
        apple+=x;
    }
};
class Mangoes:public Fruit{
    int mango{};
    public:
    Mangoes(int n){
        mango=n;
    }
    int getMangoes(){
        return mango;
    }
    void addtobasket(int x){
        mango+=x;
    }
};
int main (){
    Apple app(10);
    Mangoes mang(15);
    app.setTotal(app.getApple(),mang.getMangoes());
    cout << app.getTotal()<<"\n";
    app.addtobasket(10);
    mang.addtobasket(5);
    app.setTotal(app.getApple(),mang.getMangoes());
    cout << app.getTotal()<<"\n";
    
}
