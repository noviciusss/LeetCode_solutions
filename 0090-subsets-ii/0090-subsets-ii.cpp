class Solution {
public:
    vector<int>cnt;
    vector<vector<int>>ans;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        dfs(0,nums,cnt,ans);
        return ans;
    }
    void dfs(int start,vector<int>& nums,vector<int>& cnt, vector<vector<int>>& ans){
        ans.push_back(cnt);
        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1])continue;
            cnt.push_back(nums[i]);
            dfs(i+1,nums,cnt,ans);
            cnt.pop_back();
        }
    }
};