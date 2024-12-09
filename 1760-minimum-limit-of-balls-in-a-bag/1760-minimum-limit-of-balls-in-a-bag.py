class Solution:
    def minimumSize(self, nums: List[int], maxOperations: int) -> int:
        i,j= 1,max(nums)
        ans=j

        while i<=j:
            mid=(i+j)//2
            ops=0
            for n in nums:
                ops+=(n - 1)//mid
                if ops>maxOperations:
                    break
            if ops<=maxOperations:
                ans=mid
                j=mid-1
            else:
                i=mid+1

        return ans