class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        replica=image
        q=collections.deque()
        q.append((sr,sc))
        dirs=[(1,0),(-1,0),(0,-1),(0,1)]
        originalColour=replica[sr][sc]
        replica[sr][sc]=color
        while q:
            x,y=q.pop()
            for dx,dy in dirs:
                i,j=x+dx,y+dy
                if 0<=i<len(replica) and 0<=j<len(replica[0]) and replica[i][j]==color:
                    continue
                if 0<=i<len(replica) and 0<=j<len(replica[0]) and replica[i][j]==originalColour:
                    replica[i][j]=color
                    q.append((i,j))
        return replica