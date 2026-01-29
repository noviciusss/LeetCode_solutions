class Solution {
public:
    vector<string>ans;
    vector<string> generateParenthesis(int n) {
        string cur;
        dfs(n,0,0,cur);
        return ans;
    }
    void dfs(int n,int op,int cl ,string & chk){
        if(op==n && cl ==n){ans.push_back(chk);return;}
        if (op<n){
            chk.push_back('(');
            dfs(n,op+1,cl,chk);
            chk.pop_back(); // pahle ((())) yha tak recursion the backtrack se (pop_back , op=2) (( ->(() ->(op=2,cl=1) (()(->(()()) -> back track for other options
        }
        if(cl<op){
            chk.push_back(')');
            dfs(n,op,cl+1,chk);
            chk.pop_back();
        }
        
    }
};