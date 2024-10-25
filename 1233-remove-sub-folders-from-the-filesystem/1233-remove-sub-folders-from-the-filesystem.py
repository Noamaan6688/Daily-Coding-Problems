class Solution:
    def removeSubfolders(self, folder: List[str]) -> List[str]:
        folder.sort()
        l=[]
        l.append(folder[0])
        n=len(folder)
        for i in range(1,n):
            j=l[-1]+'/'
            if not folder[i].startswith(j):
                l.append(folder[i])
        return l
        