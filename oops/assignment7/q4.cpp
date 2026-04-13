#include <bits/stdc++.h>
using namespace std;
class SafeArray{
    private:
        int size;
        vector<int>arr;
    public:
        SafeArray(int s):size{s} {arr.assign(s,0);}
        int &operator[](int index){
            if (index<0||index>=size){
                std::cout << "out of bound\n";
                exit(0);
            }
            return arr[index];
        }
        void fill(){
            for (int i=0;i<size;i++){
            cin>>arr[i];
            }
        }
        void show(){
            for (int i=0;i<size;i++){
            cout << arr[i] << " ";
            }
            cout << "\n";
        }
        
};
int main (){
    SafeArray a(5);
    a.fill();
    cout << "Array elements: ";
    a.show();
    cout << "Access element at index 2: " << a[2] << endl;
    cout << "Trying invalid index:\n";
    cout << a[10]; 
return 0;
}
