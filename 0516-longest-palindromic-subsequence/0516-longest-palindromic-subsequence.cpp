class Solution {
public:
    int df(int i,int j,string&s,vector<vector<int>>&dp)
    {
        if (i==j) return 1;
        if (i>j) return 0;
        if (dp[i][j]!=-1) return dp[i][j];
        if (s[i]==s[j]) return 2+df(i+1,j-1,s,dp);
        int c1=df(i+1,j,s,dp);
        int c2=df(i,j-1,s,dp);
        return dp[i][j]=max(c1,c2);
    }
    
    int longestPalindromeSubseq(string s) {
        int c=0,n=s.size();
        // vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        vector<int>prev1(n+1,0),prev2(n+1,0);
        string s1=s;
        reverse(s1.begin(),s1.end());
        for (int i=1;i<=n;i+=1)
        {
            for (int j=1;j<=n;j+=1)
            {
                if (s[i-1]==s1[j-1]) prev1[j]=prev2[j-1]+1;
                else prev1[j]=max(prev2[j],prev1[j-1]);
            }
            prev2=prev1;
        }
        // c=df(0,s.size()-1,s,dp);
        return prev2[n];
    }
};