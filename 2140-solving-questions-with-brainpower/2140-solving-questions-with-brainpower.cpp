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
        vector<long long>dp(n+1,0);
        dp[n-1]=qu[n-1][0];
        long long c1=0,c2=0;
        for (int i=n-1;i>=0;i-=1)
        {
            c1=0;c2=qu[i][0];
            if (i+1<n) c1+=dp[i+1];
            if (i+qu[i][1]+1<n) c2+=dp[i+qu[i][1]+1];
            dp[i]=max(c1,c2);
        }
        
        return dp[0];
        
    }
};