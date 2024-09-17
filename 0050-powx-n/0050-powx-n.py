class Solution:
    def myPow(self, x: float, n: int) -> float:
        def fun(x,n):
            if n==0: return 1
            num=fun(x,n//2)
            num*=num
            if n%2==0: return num
            return num*x
                
        num=fun(x,abs(n))
        if n<0:
            return 1/num
        return num