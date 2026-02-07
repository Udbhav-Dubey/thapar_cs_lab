#include<bits/stdc++.h>
using namespace std;
vector<int> nsort(vector<int>a,vector<int>b){
    int n=b.size();
    int m=a.size();
    vector<int>c(n+m);
    int k=0;
    int j=0;
    int i=0;
    while(i<m && j<n){
        if (a[i]<b[j]){
            c[k]=a[i++];
        }
        else {
            c[k]=b[j++];
        }
        k++;
    }
    while(i<m){
        c[k++]=a[i++];
    }
    while(j<n){
        c[k++]=b[j++];
    }
    return c;
}
int main (){
    vector<int>a={1,3,5,7,9};
    vector<int>b={2,3,4,6,7,9};
    vector<int>c=nsort(a,b);
    for (int i=0;i<c.size();i++){
        cout << c[i] << " ";
    }
    cout << "\n";
    return 0;
}
