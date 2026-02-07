class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int n = nums.size()-1;
        int chk = nums[n];
        int ans =n;
        for(int i=n-1;i>=0;i--){
            if(nums[i]<chk){
                chk = nums[i];
                ans = i;
            }
            else{break;}
        }
        return ans;
    }
};