class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        return BinarySearch(nums,0,n-1,target);
    }

    int BinarySearch(vector<int>&nums,int low,int high,int target){
        if(low>high){
            return -1;
        }
        int mid = low+(high-low)/2;
        if(nums[mid]>target){
            return BinarySearch(nums,low,mid-1,target);
        }
        else if (nums[mid]<target){
            return BinarySearch(nums,mid+1,high,target);
        }
        else if(nums[mid]==target){
            return mid;
        }
    }
};
