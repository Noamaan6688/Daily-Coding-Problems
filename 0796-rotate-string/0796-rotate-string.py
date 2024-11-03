class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if len(s)!=len(goal):
            return False
        # j=0
        # i=0
        # c=0
        # while i<len(s):
        #     if s[i]!=goal[j]:
        #         if c==0:
        #             j+=1
        #         else:
        #             return False
        #     else:
        #         i+=1
        #         j+=1
        #         c=1
        #     j%=len(goal)
        # return True
        
        # print(s[0:]+s[:0])
        
        for i in range(len(s)):
            s1=s[i:]+s[:i]
            if s1==goal:
                return True
        
        return False
            