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
        vector<vector<int>>dp(n+1,vector<int>(am+1,0));
        // int c=df(n-1,am,co,dp);
        for (int i=0;i<=am;i+=1)
        {
            if (i%co[0]==0) dp[0][i]=1;
        }
        for (int i=1;i<n;i+=1)
        {
            for (int j=0;j<=am;j+=1)
            {
                int c1=dp[i-1][j];
                int c2=0;
                if (j>=co[i]) c2=dp[i][j-co[i]];
                dp[i][j]=c1+c2;
            }
        }
        
        return dp[n-1][am];
    }
};