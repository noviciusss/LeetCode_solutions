# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        
        if root is None:
            return []
        que = deque([root])
        result  = []
        while que:
            n = len(que)
            curr = []
            for i in range(n):
                node = que.popleft()
                curr.append(node.val)
                if node.left:
                   que.append(node.left)
                if node.right:
                  que.append(node.right)
            result.append(curr)
            
            
        return result
                
