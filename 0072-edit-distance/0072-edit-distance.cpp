class Solution {
public:
    int minDistance(string w1, string w2) {
        int n1=w1.size(),n2=w2.size();
        vector<vector<int>>dp(n1+1,vector<int>(n2+1,0));
        for (int i=0;i<=n1;i+=1) dp[i][0]=i;
        for (int  j=0;j<=n2;j+=1) dp[0][j]=j;
        for (int i=1;i<=n1;i+=1)
        {
            for (int j=1;j<=n2;j+=1)
            {
                if (w1[i-1]!=w2[j-1]) dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
                else dp[i][j]=dp[i-1][j-1];
            }
        }
        return dp[n1][n2];
    }
};