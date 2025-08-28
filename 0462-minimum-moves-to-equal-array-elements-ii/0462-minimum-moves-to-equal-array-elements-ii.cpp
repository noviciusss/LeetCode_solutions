class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int chk=nums[nums.size()/2];
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=abs(nums[i]-chk);
        }
        return ans;
    }
};