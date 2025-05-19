class Solution {
public:
    string triangleType(vector<int>& nums) {
        if(nums.size()!=3)return "none";
        unordered_map<int,int>ans;
        for(auto it:nums){
            ans[it]++;
        }
        sort(nums.begin(),nums.end());
        if(nums[0]+nums[1]<= nums[2])return "none";
        int chk =ans.size();
        if(chk==1)return "equilateral";
        if(chk==2)return "isosceles";
        return "scalene";
    }
};