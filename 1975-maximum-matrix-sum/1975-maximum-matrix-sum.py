class Solution:
    def maxMatrixSum(self, matrix: List[List[int]]) -> int:
        c1,c2=100001,0
        s=0
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if matrix[i][j]<0:
                    c2+=1
                c1=min(abs(matrix[i][j]),c1)
                s+=abs(matrix[i][j])
        if c2%2==1:
            s-=2*c1
        return s
                    