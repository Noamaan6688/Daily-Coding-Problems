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
        // vector<int>dp(n+1,0);
        // int c=df(0,nums,dp);
        // dp[n]=1;
        int c1=1,c2=1,c3=1;
        for (int i=n-1;i>=0;i-=1)
        {
            int c=0;
            if (i+1<n && nums[i]==nums[i+1]) c=max(c,c2);
            if (i+2<n)
            {
                if (nums[i+1]==nums[i] && nums[i+2]==nums[i+1]) c=max(c,c3);
                else if (nums[i+2]-nums[i+1]==1 && nums[i+1]-nums[i]==1) c=max(c,c3);
            }
            c3=c2;c2=c1;c1=c;
        }
        
        return c1;
    }
};