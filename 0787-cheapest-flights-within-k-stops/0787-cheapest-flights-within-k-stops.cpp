class Solution {
public:
    int df(int src,int dst, int k,int n,vector<vector<int>>&v,vector<vector<int>>&dp)
    {
        if (k<0) return 1e7;
        if (src==dst) return 0;
        if (dp[k][src]!=-1) return dp[k][src];
        int c=1e7;
        for (int i=0;i<n;i+=1)
        {
            if (v[src][i]!=-1)
            {
                c=min(c,v[src][i]+df(i,dst,k-1,n,v,dp));
            }
        }
        return dp[k][src]=c;
    }
    
    int findCheapestPrice(int n, vector<vector<int>>& fl, int src, int dst, int k) {
        vector<vector<int>>v(n+1,vector<int>(n+1,-1)),dp(k+2,vector<int>(n+1,-1));
        for (auto i:fl) v[i[0]][i[1]]=i[2];
        // int c=df(src,dst,k+1,n,v,dp);
        for (int k1=0;k1<k+2;k1+=1)
        {
            for (int i=n-1;i>=0;i-=1)
            {
                if (i==dst) dp[k1][i]=0;
                else
                {
                    int c1=1e7;
                    for (int j=0;j<n;j+=1)
                    {
                        if (v[i][j]!=-1)
                        {
                            if (k1>0) c1=min(c1,v[i][j]+dp[k1-1][j]);
                        }
                    }
                    dp[k1][i]=c1;
                }
            }
        }
        int c=dp[k+1][src];
        if (c==1e7) return -1;
        return c;
    }
};