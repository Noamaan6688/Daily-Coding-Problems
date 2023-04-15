class Solution {
public:
    int df(int i,int n,int k,vector<vector<int>>&pi,vector<vector<int>>&dp)
    {
        if (i==n || k==0) return 0;
        if (dp[i][k]!=-1) return dp[i][k];
        int c1=df(i+1,n,k,pi,dp);
        int c2=0,s1=0,s2=k;
        for (int j=0;j<pi[i].size();j+=1)
        {
            s1+=pi[i][j];
            s2-=1;
            int c3=s1+df(i+1,n,s2,pi,dp);
            c2=max(c2,c3);
            if (s2==0) break;
        }
        return dp[i][k]=max(c1,c2);
    }
    
    int maxValueOfCoins(vector<vector<int>>& pi, int k) {
        int n=pi.size();
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        int c=df(0,n,k,pi,dp);
        return c;
    }
};