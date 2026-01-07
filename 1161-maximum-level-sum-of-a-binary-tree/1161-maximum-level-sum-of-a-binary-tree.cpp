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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);

        int level = 0;
        int anslevel = 1;
        long long res = INT_MIN;
        while(!q.empty()){
            int sz = q.size();
            long long sum = 0;
            level++;
            for(int i=0;i<sz;i++){
                TreeNode* node = q.front();
                q.pop();
                sum+=node->val;

                if(node->left){q.push(node->left);}
                if(node->right){q.push(node->right);}
            }
            if(sum> res){
                res =sum;
                anslevel=level;
            }
        }
        return anslevel;
    }
};