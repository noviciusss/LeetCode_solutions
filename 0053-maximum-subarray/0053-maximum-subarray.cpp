class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = nums[0];
        int sum = nums[0];
        for(int i=1;i<nums.size();i++){
            curr = max(nums[i],curr+nums[i]);
            sum = max(curr,sum);
        }
        return sum;
    }
};