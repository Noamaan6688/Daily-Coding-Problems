class Solution {
public:
    string shortestCommonSupersequence(string s, string t) {
        int n=s.size(),m=t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        for(int i=0;i<=n;i+=1) dp[i][0]=0;
        for(int j=0;j<=m;j+=1) dp[0][j]=0;
        
        for(int i=1;i<=n;i+=1)
        {
            for(int j=1;j<=m;j+=1)
            {
              if(s[i-1]==t[j-1]) dp[i][j]=1+dp[i-1][j-1];
	          else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }

        int i=n,j=m;
        string ans="";
        while(i>0 && j>0)
        {
            if(s[i-1]==t[j-1])
            {
                ans+=s[i-1];
                i-=1;
                j-=1;
            }
            else if(dp[i-1][j]>dp[i][j-1])
            {
                ans+=s[i-1];
                i-=1;
            }
            else
            {
                ans+=t[j-1];
                j-=1;
            }
        }
        while(i>0) ans+=s[--i];
        while(j>0) ans+=t[--j];
        reverse(ans.begin(),ans.end());
        return ans;
    }
};