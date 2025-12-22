#include <iostream>
#include <vector>
using namespace std;
void heapify(vector<int>&arr,int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if (left<n&&arr[left]>arr[largest]){
        largest=left;
    }
    if (right<n&&arr[right]>arr[largest]){
        largest=right;
    }
    if (largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapsort(vector<int>&arr,int n){
    for (int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for (int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
int main (){
    vector<int>arr;
    int x;
    cout << "enter the elements : ";
    while(cin>>x){
        arr.push_back(x);
        if (cin.peek()=='\n'){break;}
    }
    cout << "the given array is : ";
    for (auto y:arr){
        cout << y << " ";
    }
    cout << endl;
    heapsort(arr,arr.size());
    cout << "the sorted array is : ";
    for (auto y:arr){cout << y << " ";}
    cout << endl;
    return 0;
}
