#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int left,int right){
    int i=left-1;
    int pivot=arr[right];
    for (int j=left;j<right;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[right]);
    return i+1;
}
int quicksort(vector<int>&arr,int left,int right){
    
}
int main (){
    
    return 0;
}
