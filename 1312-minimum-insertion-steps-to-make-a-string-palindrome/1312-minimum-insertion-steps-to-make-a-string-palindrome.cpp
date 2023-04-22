class Solution {
public:
    int df(int i,int j,string&s,vector<vector<int>>&dp)
    {
        if (i>=j) return 0;
        if (dp[i][j]!=-1) return dp[i][j];
        
        int c=0;
        if (s[i]==s[j]) c=0+df(i+1,j-1,s,dp);
        else c=1+min(df(i+1,j,s,dp),df(i,j-1,s,dp));
        return dp[i][j]=c;
    }
    
    int minInsertions(string s) {
        vector<vector<int>>dp(s.size()+1,vector<int>(s.size()+1,-1));
        int c=df(0,s.size()-1,s,dp);
        return c;
    }
};