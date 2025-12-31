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
    //     postorder(root,ans);
    //     return ans;
    // }
    // void postorder(TreeNode* root,vector<int>& ans){
    //     if(root==nullptr)return;
    //     postorder(root->left,ans);
    //     postorder(root->right,ans);
    //     ans.push_back(root->val);
    // }
    stack<TreeNode*>st1,st2;
    st1.push(root);
    if(root==nullptr)return ans;
    while(!st1.empty()){
        TreeNode* chk = st1.top();
        st1.pop();
        st2.push(chk);
        if(chk->left !=nullptr)(st1.push(chk->left));
        if(chk->right !=nullptr)(st1.push(chk->right));
    }
    while(!st2.empty()){
        ans.push_back(st2.top()->val);
        st2.pop();
    }
    return ans;}
};