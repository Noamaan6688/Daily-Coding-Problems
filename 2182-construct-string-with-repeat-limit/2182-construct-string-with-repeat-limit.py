class Solution:
    def repeatLimitedString(self, s: str, repeatLimit: int) -> str:
        pq=[(-ord(key), value) for key, value in Counter(s).items()]
        heapq.heapify(pq)
        ans = ""

        while pq:
            k,v=heapq.heappop(pq)
            if v<=repeatLimit:
                ans+=chr(-k)*v
            else:
                ans+=chr(-k)*repeatLimit
                if not pq:
                    break
                nk,nv =heapq.heappop(pq)
                ans+=chr(-nk)
                if nv>1:
                    heapq.heappush(pq,(nk,nv-1))
                heapq.heappush(pq,(k,v-repeatLimit))
        return ans