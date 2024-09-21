class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        l=[]
        nums.sort()
        def fun(n,l1):
            if l1 not in l:
                l.append(l1)
            for i in range(n,len(nums)):
                fun(i+1,l1+[nums[i]])
        fun(0,[])
        return l