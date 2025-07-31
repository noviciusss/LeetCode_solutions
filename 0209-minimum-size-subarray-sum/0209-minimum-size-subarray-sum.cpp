class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int maxl=INT_MAX;
        int cnt=0;
        for(int right=0;right<nums.size();right++){
                cnt+=nums[right];
            while(cnt>=target){
                cnt-=nums[l];
                maxl=min(maxl,right-l+1);
                l++;
            }
        }return maxl==INT_MAX?0:maxl;
    }
};