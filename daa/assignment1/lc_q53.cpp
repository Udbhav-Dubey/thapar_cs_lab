class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max_sum=nums[0];
        int max_c=nums[0];
        for (int i=1;i<n;i++){
            if (nums[i]+max_c>nums[i]){
                max_c=nums[i]+max_c;
            }
            else {
                max_c=nums[i];
            }
            if (max_c>max_sum){
                max_sum=max_c;
            }
        }
        return max_sum;
    }
};
