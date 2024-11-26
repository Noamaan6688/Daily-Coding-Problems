class Solution:
    def findChampion(self, n: int, edges: List[List[int]]) -> int:
        l=[0]*n
        c,s=-1,0
        for u,v in edges:
            l[v]+=1
        for i in range(n):
            if l[i]==0:
                c=i
                s+=1
            if s>1:
                return -1
        return c