#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>&nums){
    int n=nums.size();
    bool swapped;
    for (int i=0;i<n-1;i++){
    swapped=false;
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swapped=true;
                swap(arr[j],arr[j+1]);
            }
        }
            if (!swapped){break;}
    }
}
int main (){

return 0;
}
