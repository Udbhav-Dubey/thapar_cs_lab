#include <bits/stdc++.h>
using namespace std;
int median(vector<int>&arr){
    int target=arr.size()/2;
    int left=0;
    int right=arr.size()-1;
    while(left<=right){
        int pivot=arr[left+rand()%(right-left+1)];
        int gt=right;
        int lt=left;
        int i=left;
        while(i<=gt){
            if (arr[i]<pivot){
                swap(arr[i++],arr[lt++]);
            }
            else if (arr[i]>pivot){
                swap(arr[i],arr[gt--]);
            }
            else {
                i++;
            }
        }
        if (lt>target){
            right=lt-1;
        }
        else if (target>gt){
            left=gt+1;
        }
        else {return arr[target];}
    }
}
int main (){
    srand(time(0));
    cout << "enter the number of elements in array : ";
    int n;
    cin>>n;
    vector<int>arr(n);
    cout << "enter the elements of array : ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << endl <<median(arr) << endl;

    return 0;
}

