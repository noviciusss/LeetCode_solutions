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
    vector<int> preorderTraversal(TreeNode* root) {
    //     vector<int>ans;
    //     preorder(root,ans);
    //     return ans;
    // }
    // void preorder(TreeNode *root,vector<int>& as){
    //     if(root==nullptr) return;
    //     as.push_back(root->val);
    //     preorder(root->left,as);
    //     preorder(root->right,as);
    // }
    vector<int>ans;
    if(root==NULL)return ans;
    stack<TreeNode*>st;
    st.push(root);
    while(!st.empty()){
        root=st.top();
        st.pop();
        ans.push_back(root->val);
        if(root->right!=NULL){st.push(root->right);}
        if(root->left!=NULL){st.push(root->left);}

    }
    return ans;}
};