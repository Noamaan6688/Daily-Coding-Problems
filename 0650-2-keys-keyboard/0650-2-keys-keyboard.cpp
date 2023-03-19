class Solution {
public:
    int df(int i,int j,int n,vector<vector<int>>&dp)
    {
        if (i>n) return 1e7;
        if ((n-i)==0) return 0;
        if (dp[i][j]) return dp[i][j];
        
        int c1=2+df(2*i,i,n,dp);
        int c2=1+df(i+j,j,n,dp);
        return dp[i][j]=min(c1,c2);
    }
    
    int minSteps(int n) {
        if (n<=1) return 0;
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        int c=df(1,1,n,dp);
        return c+1;
    }
};