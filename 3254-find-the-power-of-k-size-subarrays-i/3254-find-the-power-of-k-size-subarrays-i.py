class Solution:
    def resultsArray(self, nums: List[int], k: int) -> List[int]:
        if len(nums)==1 or k==1:
            return nums
        i,j,n=0,0,len(nums)
        l=[-1]*(n-k+1)
        while j<n:
            if j>0 and nums[j]-nums[j-1]!=1:
                i=j
            while i<j and j-i+1>k:
                i+=1
            if j-i+1==k:
                l[j-k+1]=nums[j]
            j+=1
        return l