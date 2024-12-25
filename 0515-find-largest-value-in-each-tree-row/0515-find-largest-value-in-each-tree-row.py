# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import defaultdict
class Solution:
    def largestValues(self, root: Optional[TreeNode]) -> List[int]:
        dt=defaultdict()
        def dfs(root,i):
            if not root:
                return 
            if i in dt.keys():
                dt[i]=max(dt[i],root.val)
            else:
                dt[i]=root.val
            dfs(root.left,i+1)
            dfs(root.right,i+1)

        dfs(root,0)
        return list(dt.values())