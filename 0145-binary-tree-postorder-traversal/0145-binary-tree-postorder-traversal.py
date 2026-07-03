# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        ans = []
        def trans(node):
            if not node:
                return
            trans(node.left)
            trans(node.right)
            ans.append(node.val)
        trans(root)
        return ans