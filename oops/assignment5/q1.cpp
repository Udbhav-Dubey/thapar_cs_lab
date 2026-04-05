#include <bits/stdc++.h>
using namespace std;
class Alpha{
private:
    int a;
public:
    Alpha(){
        cout << "enter value of a : \n";
        cin >> a;
    }
    void displayAlpha(){
        cout << "value of a : " << a << "\n";
    }
    ~Alpha(){
        cout << "Alpha destructor called\n";
    }
};
class Beta{
private:
    int b;
public:
    Beta(){
        cout << "enter value of b : \n";
        cin >> b;
    }
    void displayBeta(){
        cout << "value of b : " << b << "\n";
    }
    ~Beta(){
        cout << "Beta destructor called\n";
    }
};
class Gamma: public Alpha, public Beta{
private:
    int c;
public:
    Gamma(){
        cout << "enter value of c : \n";
        cin >> c;
    }
    void displayGamma(){
        displayAlpha();
        displayBeta();
        cout << "value of c : " << c << "\n";
    }
    ~Gamma(){
        cout << "Gamma destructor called\n";
    }
};
int main(){
    Gamma g;
    cout << "\ndisplaying data : \n";
    g.displayGamma();
    return 0;
}
