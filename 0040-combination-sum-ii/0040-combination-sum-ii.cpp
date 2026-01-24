class Solution {
public:
    vector<vector<int>>ans;
    vector<int>cnt;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        dfs(0,candidates,target);
        return ans;
    }
    void dfs(int start,vector<int>& candidates, int target){
        if(target==0){ans.push_back(cnt);return;}
        for(int i=start;i<candidates.size();i++){
                if(i>start && candidates[i]==candidates[i-1])continue;
                int x = candidates[i];
                if(x>target)break;
                cnt.push_back(x);
                dfs(i+1,candidates,target-x);
                cnt.pop_back();
        }
    }
};