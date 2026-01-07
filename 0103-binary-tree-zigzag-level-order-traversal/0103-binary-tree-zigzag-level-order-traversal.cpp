/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>qu;
        qu.push(root);
        bool lfttort = true;
        while(!qu.empty()){
            int sz= qu.size();
            vector<int>row(sz);
            for(int i=0;i<row.size();i++){
                TreeNode * nd = qu.front();
                qu.pop();

                int index = (lfttort) ? i:(sz-i-1);

                row[index]=nd->val;
                if(nd->left){
                    qu.push(nd->left);
                }
                if(nd->right){
                    qu.push(nd->right);
                }
            }
            lfttort = !lfttort;
            ans.push_back(row);
        }
        return ans;
    }
};