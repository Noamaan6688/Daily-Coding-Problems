class Solution:
    def combinationSum(self, can: List[int], tar: int) -> List[List[int]]:
        l=[]
        def fun(i,l1,tar):
            if tar==0:
                l.append(l1[:])
                return
            if tar<0 or i>=len(can):
                return
            
            l1.append(can[i])
            fun(i,l1,tar-can[i])
            l1.pop()
            fun(i+1,l1,tar)
            return l
            
        fun(0,[],tar)
        return l
            