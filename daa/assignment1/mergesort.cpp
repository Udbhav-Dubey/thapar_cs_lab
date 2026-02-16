#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int left,int mid,int right){
    int n1=mid-left+1;
    int n2=right-mid;
    vector<int>l(n1);
    vector<int>r(n2);
    for (int i=0;i<n1;i++){
        l[i]=arr[left+i];
    }
    for (int i=0;i<n2;i++){
        r[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=left;
    while(i<n1&&j<n2){
        if (l[i]<=r[j]){
            arr[k++]=l[i++];
        }
        else {
            arr[k++]=r[j++];
        }
    }
    while(i<n1){
        arr[k++]=l[i++];
    }
    while(j<n2){
        arr[k++]=r[j++];
    }
}
void mergingsort(vector<int>&arr,int left,int right){
    if(left>=right){return ;}
    int mid=left+(right-left)/2;
    mergingsort(arr,left,mid);
    mergingsort(arr,mid+1,right);
    merge(arr,left,mid,right);
}
void printin(vector<int>&arr){
    for (int i=0;i<arr.size();i++){
        cout << arr[i] << " " ;
    }
    cout << "\n";
}
int main (){
    cout << "enter size of array : ";
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    printin(arr);
    mergingsort(arr,0,n-1);
    printin(arr);
    return 0;
}
