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
        // int c=df(n-1,m-1,grid,dp);
        for (int i=0;i<n;i+=1)
        {
            for (int j=0;j<m;j+=1)
            {
                if (i==0 && j==0) dp[i][j]=grid[i][j];
                else
                {
                    int c1=1e7,c2=1e7;
                    if (i>0) c1=dp[i-1][j];
                    if (j>0) c2=dp[i][j-1];
                    dp[i][j]=grid[i][j]+min(c1,c2);
                }
            }
        }
        
        return dp[n-1][m-1];
    }
};