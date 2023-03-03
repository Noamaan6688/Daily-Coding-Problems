class Solution {
public:
    void df(int i,int j,vector<vector<int>>&v,vector<vector<char>>&grid)
    {
        v[i][j]=1;
        if (i>0 && v[i-1][j]==0 && grid[i-1][j]=='1') df(i-1,j,v,grid);
        if (j>0 && v[i][j-1]==0 && grid[i][j-1]=='1') df(i,j-1,v,grid);
        if (i<grid.size()-1 && v[i+1][j]==0 && grid[i+1][j]=='1') df(i+1,j,v,grid);
        if (j<grid[0].size()-1 && v[i][j+1]==0 && grid[i][j+1]=='1') df(i,j+1,v,grid);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>>v(grid.size(),vector<int>(grid[0].size(),0));
        int c=0;
        for (int i=0;i<grid.size();i+=1)
        {
            for (int j=0;j<grid[0].size();j+=1)
            {
                if (v[i][j]==0 && grid[i][j]=='1')
                {
                    c+=1;
                    df(i,j,v,grid);
                }
            }
        }
        return c;
    }
};