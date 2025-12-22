// 3. Write a program to implement Insertion sort for sorting n elements in an array.

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int x=arr[i], j=i-1;
        while(j>=0 && arr[j]>x){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
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
    insertionSort(arr,n);
    cout << "Sorted array: ";
    printArr(arr,n);
    return 0;
}

