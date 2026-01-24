class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>curr;
        dfs(0,nums,ans,curr);
        return ans;
    }
    void dfs(int i , vector<int>& nums ,vector<vector<int>>&ans ,vector<int>& curr ){
        if(i==nums.size()){
            ans.push_back(curr);
            return;
        }

        curr.push_back(nums[i]);
        dfs(i+1,nums,ans,curr);

        curr.pop_back();
        dfs(i+1,nums,ans,curr);
    }
};