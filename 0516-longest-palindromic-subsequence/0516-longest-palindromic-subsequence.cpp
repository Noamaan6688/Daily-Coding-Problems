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
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        c=df(0,s.size()-1,s,dp);
        return c;
    }
};