class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zero=0;
        int left=0;
        int maxlength=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0){
                zero++;
            }
            while(zero>k){
                if(nums[left]==0){
                    zero--;
                }

                left++;
            }
            maxlength=max(maxlength,right-left+1);
        }
        return maxlength;
    }
};