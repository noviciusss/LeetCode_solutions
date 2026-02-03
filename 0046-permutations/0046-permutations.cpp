class Solution {
public:
    vector<vector<int>>ans;
    vector<int>chk;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>used(nums.size(),false);
        dfs(nums,used);
        return ans;
    }
    void dfs(vector<int>& nums,vector<bool>&used){
        if(chk.size()==nums.size()){ans.push_back(chk);return;}
        for(int i=0;i<nums.size();i++){
            if(used[i])continue;
            chk.push_back(nums[i]);
            used[i]=true;
            dfs(nums,used);
            chk.pop_back();
            used[i]=false;
        }
    }
};