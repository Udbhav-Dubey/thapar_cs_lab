// 5. Write a program to implement Radix sort for sorting n elements in an array.

#include <bits/stdc++.h>
using namespace std;

int getMax(int arr[], int n){
    int m=arr[0];
    for(int i=1;i<n;i++) if(arr[i]>m) m=arr[i];
    return m;
}
void countingSort(int arr[], int n, int exp){
    int out[n];
    int count[10]={0};
    for(int i=0;i<n;i++) count[(arr[i]/exp)%10]++;
    for(int i=1;i<10;i++) count[i]+=count[i-1];
    for(int i=n-1;i>=0;i--){
        out[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++) arr[i]=out[i];
}
void radixSort(int arr[], int n){
    int mx = getMax(arr,n);
    for(int exp=1;mx/exp>0;exp*=10) countingSort(arr,n,exp);
}
void printArr(int arr[], int n){
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << "\n";
}
int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:\n";
    for(int i=0;i<n;i++) cin >> arr[i];
    radixSort(arr,n);
    cout << "Sorted array: ";
    printArr(arr,n);
    return 0;
}

