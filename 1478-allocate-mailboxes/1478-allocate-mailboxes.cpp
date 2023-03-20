class Solution {
public:
    // int df(int i,int k,int n,vector<int>&hs,vector<vector<int>>&dp)
    // {
    //     int c=INT_MAX;
    //     if (k==1)
    //     {
    //         int c1=hs[i+(n-i)/2],c=0;
    //         for (int j=i;j<n;j+=1) c+=abs(hs[j]-c1);
    //         return c;
    //     }
    //     if (dp[i][k]!=-1) return dp[i][k];
    //     for (int j=i;j<=(n-k);j+=1)
    //     {
    //         int c1=hs[i+(j-i)/2],c2=0;
    //         for (int l=i;l<=j;l+=1) c2+=abs(hs[l]-c1);
    //         c=min(c,c2+df(j+1,k-1,n,hs,dp));
    //     }
    //     return dp[i][k]=c;
    // }
    
    
    int minDistance(vector<int>& hs, int k) {
        int n=hs.size();
        sort(hs.begin(),hs.end());
        vector<int>dp(n+1,1e7),v(n+1,0);
        for (int i=0;i<n;i+=1) v[i+1]=v[i]+hs[i];
        for (int i=1;i<=k;i+=1)
        {
            for (int j=n-1;j>i-2;j-=1)
            {
                for (int l=i-2;l<j;l+=1)
                {
                    int c1=(j+l+1)/2,c2=(l+j+2)/2,c3=(v[j+1]-v[c2])-(v[c1+1]-v[l+1]);
                    if (l>=0) dp[j]=min(dp[j],c3+dp[l]);
                    else dp[j]=min(dp[j],c3);
                }
            }
        }
        
        return dp[n-1];
    }
};