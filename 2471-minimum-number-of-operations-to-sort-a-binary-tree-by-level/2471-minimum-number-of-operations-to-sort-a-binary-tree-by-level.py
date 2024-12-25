# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minimumOperations(self, root: Optional[TreeNode]) -> int:
        ans,q,i=0,[root],[]
        while q:
            for node in q:
                    if node:
                        i.extend([node.left, node.right])
            arr=[(v,j) for j,v in enumerate([c.val for c in i if c])]
            idx=[j for _,j in sorted(arr)]
            for j in range(len(idx)):
                while (idx[j]!=j):
                    j1=idx[j]
                    idx[j],idx[j1]=idx[j1],idx[j]
                    ans+=1
            q,i=i,[]
        
        return ans