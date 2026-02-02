class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0,high = nums.size()-1;
        int mini = INT_MAX;
        while(low<=high){
            int mid = low+(high-low)/2;
            mini = min(nums[mid],mini);
            if(nums[low]<=nums[high]){
                mini = min(mini,nums[low]);
            }
            if(nums[low]<nums[mid]){
                mini = min(nums[low],mini);
                low = mid+1;
            }
            else {
                mini = min(nums[high],mini);
                high = mid-1;
                }
        }return mini;
    }
};