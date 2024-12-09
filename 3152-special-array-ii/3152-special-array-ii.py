class Solution:
    def isArraySpecial(self, nums: List[int], queries: List[List[int]]) -> List[bool]:
        l=[0]*len(nums)
        ans=[]
        for i in range(1,len(nums)):
            l[i]=l[i-1]+ (nums[i]%2==nums[i-1]%2)
        for i,j in queries:
            c=l[j]-l[i]
            if c!=0:
                ans.append(False)
            else:
                ans.append(True)
        return ans