class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        l=[]
        def fun(n,l1):
            l.append(l1)
            for i in range(n,len(nums)):
                fun(i+1,l1+[nums[i]])
        
        fun(0,[])
        return l