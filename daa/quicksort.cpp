#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int left,int right){
    int pivot=arr[right];
    int i=left-1;
    for (int j=left;j<right;j++){
        if (arr[j]<=pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
        swap(arr[i+1],arr[right]);
        return i+1;
}
void quickingsort(vector<int>&arr,int left,int right){
    if (left>=right){return;}
    int pivot=partition(arr,left,right);
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
    quickingsort(arr,0,n-1);
    printin(arr);
    return 0;
}
