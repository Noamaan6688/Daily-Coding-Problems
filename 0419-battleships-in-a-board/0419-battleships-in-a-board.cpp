class Solution {
public:
    void df(int i,int j,vector<vector<char>>&grid)
    {
        int n=grid.size(),m=grid[0].size();
        
        if (i<0 || j<0 || i>=n || j>=m || grid[i][j]!='X') return;
        grid[i][j]='Y';
        df(i+1,j,grid);
        df(i,j+1,grid);
    }
    
    int countBattleships(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size(),c=0;
        for (int i=0;i<n;i+=1)
        {
            for (int j=0;j<m;j+=1)
            {
                if (grid[i][j]=='X')
                {
                    df(i,j,grid);
                    c+=1;
                }
            }
        }
        return c;
    }
};