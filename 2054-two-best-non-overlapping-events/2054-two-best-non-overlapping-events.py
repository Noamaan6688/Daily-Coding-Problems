class Solution:
    def maxTwoEvents(self, events: List[List[int]]) -> int:
        events.sort()
        pq=[]
        max_val=0
        ans=0

        for i,j,value in events:
            while pq and pq[0][0]<i:
                max_val=max(max_val, heapq.heappop(pq)[1])
            ans=max(ans,max_val+value)
            heapq.heappush(pq,(j,value))
        return ans