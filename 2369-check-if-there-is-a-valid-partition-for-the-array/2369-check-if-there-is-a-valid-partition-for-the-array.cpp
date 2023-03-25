class Solution {
public:
    int df(int i,vector<int>&nums,vector<int>&dp)
    {
        if (i==nums.size()) return 1;
        if (dp[i]!=-1) return dp[i];
        int c=0;
        if (i+1<nums.size() && nums[i]==nums[i+1]) c=max(c,df(i+2,nums,dp));
        if (i+2<nums.size())
        {
            if (nums[i]==nums[i+1] && nums[i+1]==nums[i+2]) c=max(c,df(i+3,nums,dp));
            else if (nums[i+1]-nums[i]==1 && nums[i+2]-nums[i+1]==1) c=max(c,df(i+3,nums,dp));
        }
        return dp[i]=c;
    }
    
    bool validPartition(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        int c=df(0,nums,dp);
        return c;
    }
};