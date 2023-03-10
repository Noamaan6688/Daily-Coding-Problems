class Solution {
public:
//     void df(int i,int j,vector<vector<char>>&grid)
//     {
//         int n=grid.size(),m=grid[0].size();
        
//         if (i<0 || j<0 || i>=n || j>=m || grid[i][j]!='X') return;
//         grid[i][j]='Y';
//         df(i+1,j,grid);
//         df(i,j+1,grid);
//     }
    
    int countBattleships(vector<vector<char>>& grid) {
        int n=grid.size(),m=grid[0].size(),c=0;
        for (int i=n-1;i>=0;i-=1)
        {
            for (int j=m-1;j>=0;j-=1)
            {
                if (grid[i][j]=='.') continue;
                if (i<n-1 && grid[i+1][j]=='X') continue;
                if (j<m-1 && grid[i][j+1]=='X') continue;
                c+=1;
            }
        }
        return c;
    }
};