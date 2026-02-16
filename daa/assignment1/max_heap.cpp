#include <bits/stdc++.h>
using namespace std;
bool insert(vector<int>&a,int n){
    for (int j=0;j<n-1;j++){
    int i=n-1;
    int item=a[n-1];
    while(i>0&&a[i/2]<item){
        a[i]=a[i/2];
        i=i/2;
    }
    a[i]=item;
    }
    return true;
}
int main (){
    int x;
    vector<int>vec={35,33,42,10,14,19,27,44,26,31};
    insert(vec,vec.size());
    for (auto v:vec){
        cout << v << " ";
    }
    return 0;
}
