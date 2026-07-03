# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.maxdia = 0

        def dia(root)->int:
            if not root:
                return 0
            left = dia(root.left)
            right = dia(root.right)
            self.maxdia = max(self.maxdia,left+right)

            return 1+max(left,right)
        dia(root)
        return self.maxdia