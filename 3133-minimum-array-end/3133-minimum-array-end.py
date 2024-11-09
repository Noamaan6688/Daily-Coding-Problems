class Solution:
    def minEnd(self, n: int, x: int) -> int:
        c=1
        n-=1
        while n>0:
            if x&c==0:
                if n&1==1:
                    x|=c
                n>>=1
            c<<=1
        return x