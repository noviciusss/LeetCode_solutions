class Solution {
    vector<vector<int>>ans;
    vector<int>path;
    vector<int>nums;
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        nums = candidates;
        dfs(0,target);
        return ans;
    }
    void dfs(int start,int remain){
        if(remain==0){ans.push_back(path);return;}
        for(int i=start;i<nums.size();i++){
            int x = nums[i];
            if(x>remain)break;

            path.push_back(x);
            dfs(i,remain-x);
            path.pop_back();
        }
    }
};