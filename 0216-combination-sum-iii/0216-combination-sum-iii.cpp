class Solution {
public:
    vector<vector<int>>ans;
    vector<int>chk;
    vector<vector<int>> combinationSum3(int k, int n) {
      dfs(1,k,n);
      return ans;
    }
    void dfs(int start,int limit,int target){
        if(target==0 && limit==0){ans.push_back(chk);return ;}
        if(target<0)return;
        for(int i=start;i<=9;i++){ //combination sum me for loop use karna hai and use start for i and haam subset wala approach bhi use kar skate hai but pruning is the problem
        if(i>target)break;
        chk.push_back(i);
        dfs(i+1,limit-1,target-i);
        chk.pop_back();}
        
    }
};