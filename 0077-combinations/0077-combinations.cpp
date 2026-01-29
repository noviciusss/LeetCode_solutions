class Solution {
public:
    vector<vector<int>>ans;
    vector<int>chk;
    vector<vector<int>> combine(int n, int k) {
        dfs(1,n,k);
        return ans;
    }
    void dfs(int start,int tl,int len){
        if(chk.size()==len){ans.push_back(chk);return;}
        for(int i=start;i<=tl;i++){ //same hai pattern 
            chk.push_back(i);
            dfs(i+1,tl,len);
            chk.pop_back();
        }        
    }
};