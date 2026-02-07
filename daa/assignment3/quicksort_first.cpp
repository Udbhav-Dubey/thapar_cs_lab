#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int left,int right){
    int i=left-1;
    int j=right+1;
    int pivot=arr[0];
    while(true){
        do{i++;}
        while(arr[i]<pivot);
        do{j--;}
        while(arr[j]>pivot);
        if(i>=j){return j;}
        swap(arr[i],arr[j]);
    }
}
void quickingsort(vector<int>&arr,int left,int right){
    if (left>=right){return;}
    int pi=partition(arr,left,right);
    quickingsort(arr,left,pi-1);
    quickingsort(arr,pi+1,right);
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
