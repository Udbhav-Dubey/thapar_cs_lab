#include <bits/stdc++.h>
using namespace std;
class Time{
    private:
        int h,m,s;
    public:
        Time(int h=0,int m=0,int s=0):h{h},m{m},s{s} {};
       Time operator+(Time t1){
            Time t3;
            t3.s=s+t1.s;
            t3.m=m+t1.m+t3.s/60;
            t3.s=t3.s%60;
            t3.h=h+t1.h+t3.m/60;
            t3.m=t3.m%60;
            return t3;
        }
       void show(){
        cout << "hour " << h << " minute " << m << " second " << s << "\n";
       }
};
int main (){
Time t1(5,15,34),t2(9,53,58),t3;
t3=t1+t2;
t3.show();
return 0;
}
