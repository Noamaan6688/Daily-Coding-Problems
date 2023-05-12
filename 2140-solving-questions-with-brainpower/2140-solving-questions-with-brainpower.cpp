class Solution {
public:
    long long df(int i,int n,vector<vector<int>>&qu,vector<long long >&dp)
    {
        if (i==n-1) return qu[i][0];
        if (i>=n) return 0;
        if (dp[i]!=-1) return dp[i];
        
        long long c1=0,c2=0;
        c1=0+df(i+1,n,qu,dp);
        c2=qu[i][0]+df(i+qu[i][1]+1,n,qu,dp);
        return dp[i]=max(c1,c2);
    }
    
    long long mostPoints(vector<vector<int>>& qu) {
        int n=qu.size();
        vector<long long>dp(n+1,-1);
        return df(0,n,qu,dp);
        
    }
};