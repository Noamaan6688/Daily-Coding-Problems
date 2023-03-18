class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>>dp(mat.size(),vector<int>(mat[0].size(),1e9));
        for (int i=0;i<mat.size();i+=1)
        {
            for (int j=0;j<mat[0].size();j+=1)
            {
                if (mat[i][j]==0) dp[i][j]=0;
                else
                {
                    if (i>0) dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
                    if (j>0) dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
                }
            }
        }
        for (int i=mat.size()-1;i>=0;i-=1)
        {
            for (int j=mat[0].size()-1;j>=0;j-=1)
            {
                if (mat[i][j]==0) dp[i][j]=0;
                else
                {
                    if (i<mat.size()-1) dp[i][j]=min(dp[i][j],dp[i+1][j]+1);
                    if (j<mat[0].size()-1) dp[i][j]=min(dp[i][j],dp[i][j+1]+1);
                }
            }
        }
        return dp;
    }
};