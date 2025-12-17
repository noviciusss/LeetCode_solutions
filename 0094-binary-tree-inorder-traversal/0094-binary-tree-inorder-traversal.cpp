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
    vector<int> inorderTraversal(TreeNode* root) {
    //     vector<int>ans;
    //     inorder(root,ans);
    //     return ans;
    // }
    // void inorder(TreeNode* rot,vector<int>& as){
    //     if(rot==nullptr)return;
    //     inorder(rot->left,as);
    //     as.push_back(rot->val);
    //     inorder(rot->right,as);
    vector<int>ans;
    stack<TreeNode*>st;
    TreeNode* fir = root;
    while(true){
        if(fir!=NULL){
            st.push(fir);
            fir = fir->left;
        }
        else{
            if(st.empty()==true)break;
            fir = st.top();
            st.pop();
            ans.push_back(fir->val);
            fir=fir->right;
        }
    }return ans;
    }
};