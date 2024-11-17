class Solution:
    def shortestSubarray(self, nums: List[int], k: int) -> int:
        c=len(nums)+1
        c1=0
        q=deque()
        for i in range(len(nums)):
            c1+=nums[i]
            if c1>=k:
                c=min(c,i+1)

            while q and c1-q[0][0]>=k:
                c2,j=q.popleft()
                c=min(c,i-j)

            while q and q[-1][0]>c1:
                q.pop()
            q.append((c1,i))

        return -1 if c==len(nums)+1 else c
                
            