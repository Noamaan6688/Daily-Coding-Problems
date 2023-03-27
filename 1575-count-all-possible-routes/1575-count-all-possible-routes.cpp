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
        vector<vector<int>>dp(lo.size()+1,vector<int>(fu+1,-1));
        int c=df(st,fi,fu,lo,dp);
        return c;
    }
};