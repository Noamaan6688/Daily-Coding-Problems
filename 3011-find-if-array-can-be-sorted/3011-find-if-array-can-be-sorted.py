class Solution:
    def canSortArray(self, nums: List[int]) -> bool:
        
        def cnt(n):
            c=0
            for i in range(9,-1,-1):
                if (n>>i)%2==1:
                    c+=1
            return c
        
        def chk(nums):
            for i in range(1,len(nums)):
                if nums[i]<nums[i-1]:
                    return False
            return True
        
        if chk(nums)==True:
            return True
        l=[]
        for i in range(len(nums)):
            l.append(cnt(nums[i]))
        
        j=0
        while j<len(nums):
            for i in range(1,len(nums)):
                if nums[i]<nums[i-1] and l[i]==l[i-1]:
                    nums[i],nums[i-1]=nums[i-1],nums[i]
            if chk(nums)==True:
                return True
            j+=1
        return chk(nums)