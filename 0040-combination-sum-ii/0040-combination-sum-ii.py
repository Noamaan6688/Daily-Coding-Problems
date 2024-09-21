class Solution:
    def combinationSum2(self, can: List[int], tar: int) -> List[List[int]]:
        l=[]
        s=sum(can)
        if s==tar:
            return [can]
        can.sort()
        def fun(i,l1,tar):
            if tar==0:
                if l1 in l:
                    return                
                l.append(l1[:])
                return
            if tar<0 or i>=len(can): return
            l1.append(can[i])
            fun(i+1,l1,tar-can[i])
            l1.pop()
            while i+1<len(can) and can[i]==can[i+1]:
                i+=1
            fun(i+1,l1,tar)
            
        fun(0,[],tar)
        return l