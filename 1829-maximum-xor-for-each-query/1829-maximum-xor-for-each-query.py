class Solution:
    def getMaximumXor(self, nums: List[int], maximumBit: int) -> List[int]:
        res=[]
        c=0
        s=2**maximumBit-1
        for i in range(len(nums)):
            c^=nums[i]
        
        res.append(s-c)
        for i in range(len(nums)-2,-1,-1):
            c=c^nums[i+1]
            res.append(s-c)
        return res