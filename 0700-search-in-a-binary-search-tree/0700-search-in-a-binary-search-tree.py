# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
class Solution:
    def searchBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        # if root is None:
        #     return []
        # ans =[]
        # que = deque([root])
        # while que:
        #     n = len(que)
        #     for i in range(n):
        #         node  = que.popleft()
        #         if node.val == val:
        #             ans.append(node)
        #         if node.left:
        #             que.append(node.left)
        #         if node.right:
        #             que.append(node.right)
        # return ans
        curr = root
        while curr is not None:
            if curr.val==val:
                return curr
            elif curr.val>val:
                curr = curr.left
            else:
                curr = curr.right
        return None