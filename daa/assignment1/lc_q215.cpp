#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        int target=n-k;
        int left=0;
        int right=n-1;
        while(true){
            int pivot=nums[(left+rand()%(right-left+1))];
            int gt=right;
            int lt=left;
            int i=left;
            while(i<=gt){
                if (nums[i]<pivot){
                    swap(nums[i++],nums[lt++]);
                }
                else if (nums[i]>pivot){
                    swap(nums[i],nums[gt--]);
                }
                else{
                    i++;
                }
            }
            if (target<lt){
                right=lt-1;
            }
            else if (target>gt){
                left=gt+1
            }
            else {
                return nums[target];
            }
        }
    }
};
