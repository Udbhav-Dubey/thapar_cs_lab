#include <iostream>
using namespace std;

namespace A {
    int x = 10;
    void show() {
        cout << "A x = " << x << endl;
    }
}

namespace B {
    int x = 20;
    void show() {
        cout << "B x = " << x << endl;
    }
}

int main() {
    A::show();  
    B::show();   
    return 0;
}

