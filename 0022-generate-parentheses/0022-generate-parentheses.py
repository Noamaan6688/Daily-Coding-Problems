class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        l=[]
        def fun(i,j,n,s):
            if i==j and i+j==n*2:
                l.append(s)
                return 
            if i<n:
                fun(i+1,j,n,s+'(')
            if j<i:
                fun(i,j+1,n,s+')')
        fun(0,0,n,"")
        return l 
                