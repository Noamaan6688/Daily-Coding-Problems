class Solution {
public:
    int df(int ta,vector<int>&nums,vector<int>&dp)
    {
        if (ta==0) return 1;
        if (dp[ta]!=-1) return dp[ta];
        dp[ta]=0;
        for (auto i:nums)
        {
            if (i<=ta) dp[ta]+=df(ta-i,nums,dp);
        }
        return dp[ta];
    }
    
    int combinationSum4(vector<int>& nums, int ta) {
        
        vector<uint>dp(ta+1,0);
        // int c=df(ta,nums,dp);
        dp[0]=1;
        for (int i=1;i<=ta;i+=1)
        {
            for (auto j:nums)
            {
                if (j<=i) dp[i]+=dp[i-j];
            }
        }
        
        
        return dp[ta];
    }
};