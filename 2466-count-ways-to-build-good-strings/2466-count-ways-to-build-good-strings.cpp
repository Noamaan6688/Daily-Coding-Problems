class Solution {
public:
    int mod=1e9+7;
    
    int df(int sz,int ze,int on,int lo,int hi,vector<int>&dp)
    {
        if (sz>hi) return 0;
        if (sz==hi) return 1;
        if (dp[sz]!=-1) return dp[sz];
        int c1=0,c2=0;
        c1=df(sz+ze,ze,on,lo,hi,dp)%mod;
        c2=df(sz+on,ze,on,lo,hi,dp)%mod;
        if (sz>=lo && sz<=hi) c2+=1;
        return dp[sz]=(c1+c2)%mod;
    }
    
    int countGoodStrings(int lo,int hi,int ze,int on) {
        vector<int>dp(hi+max(ze,on)+1,0);
        for (int i=hi;i>=0;i-=1)
        {
            int c1=0,c2=0;
            c1=dp[i+ze];
            c2=dp[i+on];
            dp[i]=(c1+c2)%mod;
            if (i>=lo && i<=hi) dp[i]+=1,dp[i]%=mod;
        }
        
        // int c=df(0,ze,on,lo,hi,dp)%mod;
        return dp[0];
    }
};