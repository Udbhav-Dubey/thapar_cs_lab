#include <bits/stdc++.h>
using namespace std;
class Test{
private:
    float x;
public:
    Test(float x):x{x} {}
    operator float(){
        return x;
    }
};
int main (){
    Test t(6.45);
    float f;
    f=t;
    cout << f << "\n";
return 0;
}
