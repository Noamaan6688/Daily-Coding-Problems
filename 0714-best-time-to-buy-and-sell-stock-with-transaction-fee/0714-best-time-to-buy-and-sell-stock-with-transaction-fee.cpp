class Solution {
public:
    int df(int i,bool t,int fee,vector<int>&pr,vector<vector<int>>&dp)
    {
        if (i==pr.size()) return 0;
        if (dp[i][t]!=-1) return dp[i][t];
        int c=0;
        if (t)
        {
            int c1=-pr[i]+df(i+1,0,fee,pr,dp);
            int c2=0+df(i+1,1,fee,pr,dp);
            c=max(c1,c2);
        }
        else
        {
            int c1=pr[i]-fee+df(i+1,1,fee,pr,dp);
            int c2=0+df(i+1,0,fee,pr,dp);
            c=max(c1,c2);
        }
         return dp[i][t]=c;   
    }
    
    int maxProfit(vector<int>& pr,int fee) {
        int n=pr.size();
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
        int c=df(0,1,fee,pr,dp);
        return c;
    }
};