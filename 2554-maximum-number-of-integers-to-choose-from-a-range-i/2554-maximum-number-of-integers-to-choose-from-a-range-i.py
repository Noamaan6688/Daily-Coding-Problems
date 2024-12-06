class Solution:
    def maxCount(self, banned: List[int], n: int, maxSum: int) -> int:
        # banned_set = set(banned)  # Use a set for quick lookups
        s,c=0,0
        for i in range(1, n + 1):
            if i in banned:
                continue
            s+=i
            if s>maxSum:
                break
            c+=1
        return c