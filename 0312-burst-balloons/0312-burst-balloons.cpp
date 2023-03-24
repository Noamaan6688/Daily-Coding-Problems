class Solution {
public:
    int df(int i,int j,vector<int>&nums,vector<vector<int>>&dp)
    {
        if (i>j) return 0;
        if (dp[i][j]!=-1) return dp[i][j];
        int c=INT_MIN;
        for (int i1=i;i1<=j;i1+=1) c=max(c,nums[i-1]*nums[i1]*nums[j+1]+df(i,i1-1,nums,dp)+df(i1+1,j,nums,dp));
        return dp[i][j]=c;
    }
    
    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(),1);
        nums.insert(nums.end(),1);
        int n=nums.size()-2;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        int c=df(1,n,nums,dp);
        return c;
    }
};