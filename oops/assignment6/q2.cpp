#include <bits/stdc++.h>
using namespace std;
class shape{
    public:
        virtual void area()=0;
        virtual void display()=0;
};
class circle:public shape{
    int r;
    public:
    circle(int ra):r{ra}{};
        void area()override{
            cout << "area is " << 3.14 * r * r << "\n";
        };
        void display()override{
            cout << "circe of radius "<< r << "\n";
        };
};
class rectangle:public shape{
    int l,b;
    public:
    rectangle(int le,int br):l{le},b{br}{};
    void area()override{
        cout << "area is " << l*b << "\n";
    };
    void display()override{
        cout << "rectangle of l " << l << " b : " << b << "\n";
    };
};
class triangle:public shape{
    int b,h;
    public:
    triangle(int ba,int he):b{ba},h{he}{};
    void area()override{
        cout << "area is " << b*h << "\n";
    }
    void display()override{
        cout << "triangle is of base : " << b << " height : " << h << "\n";
    }
};
int main (){
    circle r(10);
    rectangle rec(10,12);
    triangle tria(20,10);
    shape* sh=&r;
    sh->display();
    sh->area();
    sh=&rec;
    sh->display();
    sh->area();
    sh=&tria;
    sh->display();
    sh->area();
    return 0;
}
