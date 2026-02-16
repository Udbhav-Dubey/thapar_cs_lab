#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int left,int mid,int right,vector<int>&temp){
    int k=left;
    int i=left;
    int j=mid+1;
    while(i<=mid&&j<=right){
        if (arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else {
            temp[k++]=arr[j++];
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=right){
        temp[k++]=arr[j++];
    }
    for (int u=left;u<=right;u++){
        arr[u]=temp[u];
    }
}
void mergesort(vector<int>&arr,int left,int right,vector<int>&temp){
    if (left>=right){
        return ;
    }
    int mid=left+(right-left)/2;
    mergesort(arr,left,mid,temp);
    mergesort(arr,mid+1,right,temp);
    merge(arr,left,mid,right,temp);
}
int main (){
    int n;
    cout << "enter the size of n : \n";
    cin >> n;
    vector<int>arr(n);
    std::cout << " enter the elements of array : \n";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    std::cout << "now sorting : \n";
    vector<int>temp(n,0);
    mergesort(arr,0,n-1,temp);
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}   
