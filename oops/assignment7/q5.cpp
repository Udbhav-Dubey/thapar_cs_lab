#include <bits/stdc++.h>
using namespace std;
class Input{
    private:
        vector<int>data;
    public:
        void operator()(initializer_list<int>list){
            data.clear();
            for (int x:list){
                data.push_back(x);
            }
        }
        void show(){
            for (int x:data){
                cout << x << " ";
            }
            cout << "\n";
        }
};
int main(){
    Input obj;
    obj({10, 20, 30, 40, 50}); 
    obj.show();
    obj({1,2});
    obj.show();

return 0;
}
