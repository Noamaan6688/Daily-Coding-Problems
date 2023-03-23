class Solution {
public:
    int df(int i,int c,int n,int m,int k,vector<vector<vector<int>>>&dp)
    {
        if (n==i)
        {
            if (k==0) return 1;
            return 0;
        }
        if (k<0) return 0;
        int mod=1000000007;
        if (dp[c][i][k]==0)
        {
            dp[c][i][k]=1;
            for (auto j=1;j<=m;j+=1)
            {
                dp[c][i][k]+=(df(i+1,max(c,j),n,m,k-(c<j),dp))%mod;
                dp[c][i][k]%=mod;
            }
        }
        return dp[c][i][k]-1;
    }
    
    int numOfArrays(int n, int m, int k) {
        vector<vector<vector<int>>>dp(102,vector<vector<int>>(202,vector<int>(102,0)));
        int c=df(0,0,n,m,k,dp)%1000000007;
        return c;
    }
};