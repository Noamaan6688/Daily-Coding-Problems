class Solution {
public:
    int mod=1000000007;
    
    int df(int i,int n,int mp,vector<int>&grp,vector<int>&pro,vector<vector<vector<int>>>&dp)
    {
        if (n<0) return 0;
        if (i==grp.size())
        {
            if (mp>0) return 0;
            return 1;
        }
        if (mp<0) mp=0;
        if (dp[mp][n][i]!=-1) return dp[mp][n][i];
        int c1=df(i+1,n-grp[i],mp-pro[i],grp,pro,dp);
        int c2=df(i+1,n,mp,grp,pro,dp);
        return dp[mp][n][i]=(c1+c2)%mod;
    }
    
    int profitableSchemes(int n, int mp, vector<int>& grp, vector<int>& pro) {
        vector<vector<vector<int>>>dp(mp+1,vector<vector<int>>(n+1,vector<int>(grp.size()+1,-1)));
        int c=df(0,n,mp,grp,pro,dp);
        return c;
    }
};