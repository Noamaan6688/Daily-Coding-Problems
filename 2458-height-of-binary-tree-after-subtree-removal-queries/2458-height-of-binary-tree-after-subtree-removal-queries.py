# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def treeQueries(self, root: Optional[TreeNode], queries: List[int]) -> List[int]:
    
        dp = Counter()
        def fun(node):
            if not node:
                return -1

            dp[node.val] =  max(1 + fun(node.left),1+fun(node.right))
            return dp[node.val]

        fun(root)
        l=collections.defaultdict(int)

        def dfs(node,depth,maxi):
            if not node: return 

            l[node.val] = maxi
            if node.right == None:
                dfs(node.left,depth+1,max(maxi,depth))
            else:
                dfs(node.left,depth+1,max(maxi,depth+1+dp[node.right.val]))
            if node.left == None:
                dfs(node.right,depth+1,max(maxi,depth))
            else:
                dfs(node.right,depth+1,max(maxi,depth+1+dp[node.left.val]))

        dfs(root,0,0)
        return [l[i] for i in queries]