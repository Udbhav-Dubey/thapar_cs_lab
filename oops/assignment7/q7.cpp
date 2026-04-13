#include <bits/stdc++.h>
using namespace std;
class Test{
    private:
        float ft;
    public:
        Test(float &f){
            ft=f;
        }
        void show(){
            cout << "val in obj : " << ft << "\n";
        }
};
int main (){
float f=5.6;
Test t=f;
t.show();
return 0;
}
