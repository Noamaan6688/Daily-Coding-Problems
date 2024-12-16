class Solution:
    def getFinalState(self, nums: List[int], k: int, multiplier: int) -> List[int]:
        for _ in range(k):
            c1=nums[0]
            c2=0
            for i in range(1,len(nums)):
                if c1>nums[i]:
                    c1=nums[i]
                    c2=i
            nums[c2]*=multiplier
        return nums