class Solution:
    def findTargetSumWays(self, nums: List[int], target: int) -> int:
        dp = {}
        def fun(i,s):
            if i==len(nums):
                if s==target:
                    return 1
                else:
                    return 0
            if (i,s) in dp:
                return dp[(i,s)]
            dp[(i,s)]=fun(i+1,s+nums[i])+fun(i+1,s-nums[i])
            return dp[(i,s)]
        
        c=fun(0,0)
        return c