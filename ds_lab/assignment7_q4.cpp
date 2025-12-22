// 4. Write a program to implement Shell sort for sorting n elements in an array.

#include <bits/stdc++.h>
using namespace std;

void shellSort(int arr[], int n){
    for(int gap=n/2;gap>0;gap/=2){
        for(int i=gap;i<n;i++){
            int temp=arr[i], j;
            for(j=i;j>=gap && arr[j-gap]>temp;j-=gap){
                arr[j]=arr[j-gap];
            }
            arr[j]=temp;
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
    shellSort(arr,n);
    cout << "Sorted array: ";
    printArr(arr,n);
    return 0;
}

