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
        vector<int>dp(ta+1,-1);
        int c=df(ta,nums,dp);
        return c;
    }
};