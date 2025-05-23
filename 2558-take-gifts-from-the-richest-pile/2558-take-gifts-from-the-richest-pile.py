class Solution:
    def pickGifts(self, gifts: List[int], k: int) -> int:
        nums=[-num for num in gifts]
        heapify(nums)
        
        while k>0:
            c=math.isqrt(-heappop(nums))
            heappush(nums,-c)
            k-=1
        return -sum(nums)