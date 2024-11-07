class Solution:
    def largestCombination(self, can: List[int]) -> int:
        c=0
        for i in range(32):
            s=0
            for j in can:
                s+=(j>>i)&1
            c=max(c,s)
        return c