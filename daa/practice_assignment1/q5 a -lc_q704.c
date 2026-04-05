int bsearc(int* nums, int low,int high,int target){
    if (low>high){return -1;}
    int mid=low+(high-low)/2;
    if (nums[mid]==target){return mid;}
    else if (nums[mid]>target){
        return bsearc(nums,low,mid-1,target);
    }
    else {
        return bsearc(nums,mid+1,high,target);
    }
}
int search(int* nums, int numsSize, int target) {
    return bsearc(nums,0,numsSize - 1,target);
}
