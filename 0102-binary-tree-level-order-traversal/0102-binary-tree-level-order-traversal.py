# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if not root:
            return []
        ans = []
        qu = deque([root])
        while qu:
            n =  len(qu)
            chk = []
            for _ in range(n):
                node = qu.popleft()
                chk.append(node.val)

                if node.left:
                    qu.append(node.left)
                if node.right:
                    qu.append(node.right)
            ans.append(chk)
        return ans