class Solution {
public:
    int df(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp)
    {
        if (i==0 && j==0) return grid[i][j];
        if (i<0 || j<0) return 1e7;
        if (dp[i][j]!=-1) return dp[i][j];
        return dp[i][j]=grid[i][j]+min(df(i-1,j,grid,dp),df(i,j-1,grid,dp));
    }
    
    
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int c=df(n-1,m-1,grid,dp);
        return c;
    }
};