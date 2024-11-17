class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        n,m=len(grid),len(grid[0])
        freshOranges=0
        q=collections.deque()
        for i in range(n):
            for j in range(m):
                if grid[i][j]==2:
                    q.append((i,j))
                elif grid[i][j]==1:
                    freshOranges+=1
        if freshOranges==0:
            return 0
        if not q:
            return -1
        
        minutes=-1
        dirs=[(1,0),(-1,0),(0,-1),(0,1)]
        while q:
            qsize=len(q)
            while qsize>0:
                x,y=q.popleft()
                qsize-=1
                for dx,dy in dirs:
                    i,j=x+dx,y+dy
                    if 0<=i<n and 0<=j<m and grid[i][j]==1:
                        grid[i][j]=2
                        q.append((i,j))
                        freshOranges-=1
            minutes+=1
        if freshOranges==0:
            return minutes
        return -1
            
            
                    