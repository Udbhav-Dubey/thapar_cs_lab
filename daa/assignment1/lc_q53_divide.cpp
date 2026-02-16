class Solution {
public:
    int maxSub(vector<int>&nums,int left,int right){
        if (left>right){
            return INT_MIN;
        }
        int left_sum=0;
        int right_sum=0;
        int mid=left+(right-left)/2;
        for (int i=mid-1,curr_sum=0;i>=left;i++){
            curr_sum+=nums[i];
            left_sum=max(curr_sum,left_sum);
        }
        for (int i=mid+1,curr_sum=0;i<=right;i++){
            curr_sum+=nums[i];
            right_sum=max(curr_sum,right_sum);
        }
        return max({maxSub(nums,left,mid-1),maxSub(nums,mid+1,right),left_sum+nums[mid]+right_sum});
    }
    int maxSubArray(vector<int>& nums) {
        return maxSub(nums,0,nums.size()-1);      
    }
};
