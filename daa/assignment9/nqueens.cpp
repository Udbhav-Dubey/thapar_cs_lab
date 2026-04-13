#include <bits/stdc++.h>
using namespace std;
class A{
    public:
        int count{0};
bool place(int col,int row,vector<int>&pos){
    for (int i=0;i<row;i++){
        if (pos[i]==col||abs(row-i)==abs(pos[i]-col)){
            return false;
        }
    }
    return true;
}
void solve(bool &flag,vector<int>&pos,int n,int row){
        if (row==n){
                for (auto j:pos){
                    cout << j << " " ;
                }
                flag=1;
                count++;
                cout << "\n";
            }
    for (int i=1;i<=n;i++){
        if (place(i,row,pos)){
            pos[row]=i;
            solve(flag,pos,n,row+1);
        }
    }
}
void nqueens(int n){
    vector<int>pos(n);
    bool flag=0;
    solve(flag,pos,n,0);
    if (!flag){cout << 0 << "\n";}
}
};
int main (){
    int n;
    cin>>n;
    A a;
    a.nqueens(n);
    cout << a.count << "\n";
return 0;
}
