class Solution {
public:
    int df(int i,int k,int n,vector<int>&hs,vector<vector<int>>&dp)
    {
        int c=INT_MAX;
        if (k==1)
        {
            int c1=hs[i+(n-i)/2],c=0;
            for (int j=i;j<n;j+=1) c+=abs(hs[j]-c1);
            return c;
        }
        if (dp[i][k]!=-1) return dp[i][k];
        for (int j=i;j<=(n-k);j+=1)
        {
            int c1=hs[i+(j-i)/2],c2=0;
            for (int l=i;l<=j;l+=1) c2+=abs(hs[l]-c1);
            c=min(c,c2+df(j+1,k-1,n,hs,dp));
        }
        return dp[i][k]=c;
    }
    
    
    int minDistance(vector<int>& hs, int k) {
        int n=hs.size();
        sort(hs.begin(),hs.end());
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        int c=df(0,k,n,hs,dp);
        return c;
    }
};