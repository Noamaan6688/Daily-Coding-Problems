class Solution:
    def findScore(self, nums: List[int]) -> int:
        l=[0]*len(nums)
        ans,n=0,len(nums)
        pq=[(nums[i],i) for i in range(n)]
        heapq.heapify(pq)
        while pq:
            i,j=heapq.heappop(pq)
            if l[j]==1:
                continue
            if j+1<n:
                l[j+1]=1
            if j>0:
                l[j-1]=1
            ans+=i
        return ans