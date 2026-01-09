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
    bool ischk(TreeNode *a,TreeNode* b){
        if(a==nullptr && b ==nullptr ){return true;}
        if(a==nullptr || b==nullptr){return false;}
        if(a->val != b->val)return false;
        return ischk(a->left , b->right) && ischk(a->right,b->left);

    }
    bool isSymmetric(TreeNode* root) {
        return ischk(root->left,root->right);
    }
};