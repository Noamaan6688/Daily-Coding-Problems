class Solution {
public:
    bool df(int i,int j,int m,int n,vector<vector<int>>&grid)
    {
        if (i<0 || i>=m || j<0 || j>=n) return 0;
        if (grid[i][j]==1) return 1;
        grid[i][j]=1;
        bool c1=df(i-1,j,m,n,grid),c2=df(i+1,j,m,n,grid),c3=df(i,j-1,m,n,grid),c4=df(i,j+1,m,n,grid);
        return c1 && c2 && c3 && c4;
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),c=0;
        if(m<=2 || n<=2) return 0;
        for (int i=0;i<m;i+=1)
        {
            for (int j=0;j<n;j+=1)
            {
                if (grid[i][j]==0 && df(i,j,m,n,grid)) c+=1;
            }
        }
        return c;
    }
};