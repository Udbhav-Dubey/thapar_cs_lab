#include <iostream>
using namespace std;
class Complex{
    private:
        float real;
        float imag;
    public:
        void set(){
            cout << "enter real value : ";
            cin>>real;
            cout << "enter imag value : ";
            cin>>imag;
        }
        void display(){
            cout << real << "+ i" << imag << endl;
        }
        void setreal(float r){
            real=r;
        }
        void setimag(float i){
            imag=i;
        }
        float getreal(){
            return real;
        }
        float getimag(){
            return imag;
        }
};
        Complex sum(Complex *a , Complex *b){
            Complex result;
            float tr=a->getreal()+b->getreal();
            result.setreal(tr);
            float ti=a->getimag()+b->getimag();
            result.setimag(ti);
            return result;
        }
int main (){
    Complex a;
    Complex b;
    a.set();
    cout << "complex a-> ";
    a.display();
    b.set();
    cout << "complex b-> ";
    b.display();
    Complex c=sum(&a,&b);
    cout << "their sum -> ";
    c.display();
    return 0;
}
