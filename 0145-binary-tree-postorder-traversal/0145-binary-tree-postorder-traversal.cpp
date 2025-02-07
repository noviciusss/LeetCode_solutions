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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postorder(root,ans);
        return ans;
    }
    void postorder(TreeNode *rt,vector<int>& as){
        if(rt==nullptr)return ;
        postorder(rt->left,as);
        postorder(rt->right,as);
        as.push_back(rt->val);
    }
};