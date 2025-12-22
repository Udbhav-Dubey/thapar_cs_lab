// 1. Write a program to implement bubble sort for sorting n elements in an array.

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
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
    bubbleSort(arr,n);
    cout << "Sorted array: ";
    printArr(arr,n);
    return 0;
}

