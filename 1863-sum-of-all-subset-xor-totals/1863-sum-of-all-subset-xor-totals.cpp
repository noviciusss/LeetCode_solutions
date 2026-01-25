class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
         return dfs(0,0,nums);
    }
    int dfs(int start,int ans,vector<int>& nums){
        if(start==nums.size()){return ans;}
        int take = dfs(start+1,ans^nums[start],nums);
        int skip = dfs(start+1,ans,nums);
        return take+skip;
    }
};