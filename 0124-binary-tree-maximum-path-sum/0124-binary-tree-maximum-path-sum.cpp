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
    int maxi(TreeNode* root,int& ma){
        if(root==NULL)return 0;
        int lh =max(0,maxi(root->left,ma));
        int rh = max(0,maxi(root->right,ma));
        ma = max(ma,lh+rh+root->val);
        return max(lh,rh)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxii = INT_MIN;
        maxi(root,maxii);
        return maxii;
    }
};