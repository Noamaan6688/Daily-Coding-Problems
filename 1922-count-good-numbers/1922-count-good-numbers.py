class Solution:
    def countGoodNumbers(self, n: int) -> int:
        mod=1000000007
        o=n//2
        e=n//2+n%2
        num=(pow(5,e,mod)*pow(4,o,mod))%mod
        return num%mod
            