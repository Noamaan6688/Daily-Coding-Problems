class Solution {
public:
    int df(int i,int am,vector<int>&co,vector<vector<int>>&dp)
    {
        if (i==0)
        {
            if (am%co[0]==0) return 1;
            return 0;
        }
        if (dp[i][am]!=-1) return dp[i][am];
        int c1=df(i-1,am,co,dp);
        int c2=0;
        if (am>=co[i]) c2=df(i,am-co[i],co,dp);
        return dp[i][am]=c1+c2;
    }
    
    int change(int am,vector<int>& co) {
        int n=co.size();
        vector<vector<int>>dp(n+1,vector<int>(am+1,-1));
        int c=df(n-1,am,co,dp);
        return c;
    }
};