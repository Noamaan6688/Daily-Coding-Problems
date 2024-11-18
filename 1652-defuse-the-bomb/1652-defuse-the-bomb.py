class Solution:
    def decrypt(self, code: List[int], k: int) -> List[int]:
        n=len(code)
        result=[0]*n
        
        if k==0:
            return result
            
        start=1 if k>0 else n+k
        end=k if k>0 else n-1
        
        wSum=sum(code[i%n] for i in range(start, end+1))
        
        for i in range(n):
            result[i] = wSum
            wSum-=code[(start+i)%n]
            wSum+=code[(end+i+1)%n]
            
        return result