class Solution {
public:
    int mod=1e9+7;
    int df(int i,int j,int fu,vector<int>&lo,vector<vector<int>>&dp)
    {
        if (dp[i][fu]!=-1) return dp[i][fu];
        int c=0;
        if (i==j) c+=1;
        for (int i1=0;i1<lo.size();i1+=1)
        {
            if (i1==i || abs(lo[i1]-lo[i])>fu) continue;
            c+=df(i1,j,fu-abs(lo[i1]-lo[i]),lo,dp)%mod;
            c%=mod;
        }
        return dp[i][fu]=c%mod;
    }
    
    int countRoutes(vector<int>&lo,int st,int fi,int fu) {
        vector<vector<int>>dp(lo.size()+1,vector<int>(fu+1,0));
        // int c=df(st,fi,fu,lo,dp);
        for (int i=0;i<=fu;i+=1) dp[fi][i]=1;
        for (int i=0;i<=fu;i+=1)
        {
            for (int j=0;j<lo.size();j+=1)
            {
                for (int j1=0;j1<lo.size();j1+=1)
                {
                    if (j1!=j && i>=abs(lo[j1]-lo[j])) 
                        dp[j][i]=(dp[j][i]+dp[j1][i-abs(lo[j1]-lo[j])])%mod;
                }
            }
        }
        
        return dp[st][fu];
    }
};