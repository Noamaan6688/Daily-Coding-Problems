class Solution {
public:
    int df(int i,int j,vector<int>&nums1,vector<int>&nums2,vector<vector<int>>&dp)
    {
        if (i==nums1.size() || j==nums2.size()) return 0;
        if (dp[i][j]!=-1) return dp[i][j];
        int c1=0,c2=0;
        if (nums1[i]==nums2[j]) c1=1+df(i+1,j+1,nums1,nums2,dp);
        else
        {
            int c3=df(i+1,j,nums1,nums2,dp);
            int c4=df(i,j+1,nums1,nums2,dp);
            c2=max(c3,c4);
        }
        return dp[i][j]=max(c1,c2);
    }
    
    
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>dp(nums1.size()+1,vector<int>(nums2.size()+1,0));
        int n1=nums1.size(),n2=nums2.size();
        for (int i=n1-1;i>=0;i-=1)
        {
            for (int j=n2-1;j>=0;j-=1)
            {
                int c1=0,c2=0;
                if (nums1[i]==nums2[j]) c1=1+dp[i+1][j+1];
                else
                {
                    int c3=dp[i+1][j],c4=dp[i][j+1];
                    c2=max(c3,c4);
                }
                dp[i][j]=max(c1,c2);
            }
        }
        
        int c=dp[0][0];
        return c;
    }
};