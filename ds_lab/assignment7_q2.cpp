// 2. Write a program to implement Selection sort for sorting n elements in an array.

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int mi=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mi]) mi=j;
        }
        swap(arr[i],arr[mi]);
    }
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
    selectionSort(arr,n);
    cout << "Sorted array: ";
    printArr(arr,n);
    return 0;
}

