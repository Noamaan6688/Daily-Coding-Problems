class Solution:
    def combinationSum(self, can: List[int], tar: int) -> List[List[int]]:
        l=[]
        def fun(n,l1,tar):
            if tar==0:
                l.append(l1)
                return
            if tar<0:
                return
            for i in range(n,len(can)):
                fun(i,l1+[can[i]],tar-can[i])
            # fun(i,l1+[can[i]],tar-can[i])
            # fun(i-1,l1+[can[i]],tar-can[i])
            # fun(i-1,l1,tar)
            
        fun(0,[],tar)
        return l
            