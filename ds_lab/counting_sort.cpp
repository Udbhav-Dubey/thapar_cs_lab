#include <bits/stdc++.h>
using namespace std;
void countingSort(vector<int>&nums){
    int n=nums.size();
    int k=*max_element(nums.begin(),nums.end());
    vector<int> count(k+1,0);
    for (int num:nums){
        count[num]++;
    }
    for (int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }
    vector<int>output(n);
    for (int i=n-1;i>=0;i--){
        int num=nums[i];
        output[count[num]-1]=num;
        count[num]--;
    }
    nums=output;
}
