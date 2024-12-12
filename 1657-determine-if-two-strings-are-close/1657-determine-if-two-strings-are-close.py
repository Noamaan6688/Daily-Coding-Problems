class Solution:
    def closeStrings(self, word1: str, word2: str) -> bool:
        def fun(s):
            l=[0]*26
            t=[False]*26
            for i in s:
                j=ord(i)-ord('a')
                t[j]=True
                l[j]+=1
            return (t,l)
        
        t1,l1=fun(word1)
        t2,l2=fun(word2)
        if t1!=t2:
            return False
        return sorted(l1)==sorted(l2)
    