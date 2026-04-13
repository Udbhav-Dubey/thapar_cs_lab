#include <iostream>
#include <cmath>
using namespace std;
class Cartesian; 
class Polar {
private:
    float r, theta;
public:
    Polar(float radius, float angle) {
        r = radius;
        theta = angle;
    }
    operator Cartesian();
};
class Cartesian {
private:
    float x, y;
public:
    Cartesian(float a = 0, float b = 0) {
        x = a;
        y = b;
    }
    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
    friend class Polar;
};
Polar::operator Cartesian() {
    float x = r * cos(theta);
    float y = r * sin(theta);
    return Cartesian(x, y);
}
int main() {
    Polar p(10, 0.5);
    Cartesian c = p; 
    c.show();
    return 0;
}
