#include <bits/stdc++.h>
using namespace std;
class Polygon{
    protected:
    int width{};
    int height{};
    public:
        void set_value(int w,int h){
            width=w;
            height=h;
        };
        virtual int calc_area()=0;
        
};
class Rectangle:public Polygon{
   public:
    Rectangle(int w,int h){
        set_value(w,h);
    };
       int calc_area()override{
            return width*height;
        }
};
class Triangle:public Polygon{
    public:
        Triangle(int w,int h){
            set_value(w,h);
        }
        int calc_area()override{
            return 0.5*width*height;
        }
};
int main(){
  Rectangle rec(10,15);
  Polygon* poly=&rec;
Triangle tria(10,15);
    cout << "area of rectangle "<< poly->calc_area()<<"\n";
    poly=&tria;
    cout << "area of triangle  " << poly->calc_area()<<"\n";

return 0;
}
