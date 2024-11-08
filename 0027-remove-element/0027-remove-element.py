class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        i,j,c=0,len(nums)-1,0
        for l in range(len(nums)):
            if nums[l]!=val:
                c+=1
        while i<j:
            if nums[i]==val and nums[j]!=val:
                nums[i],nums[j]=nums[j],nums[i]
                i+=1
                j-=1
            elif nums[i]!=val:
                i+=1
            elif nums[j]==val:
                j-=1
        return c