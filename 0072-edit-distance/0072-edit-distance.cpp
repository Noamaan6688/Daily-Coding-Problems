class Solution {
public:
    int df(int i,int j,string &s1,string &s2,vector<vector<int>>&dp)
    {
        if (i<0) return j+1;
        if (j<0) return i+1;
        if (dp[i][j]!=-1) return dp[i][j];
        
        if (s1[i]!=s2[j]) return dp[i][j]=min({df(i,j-1,s1,s2,dp),df(i-1,j,s1,s2,dp),df(i-1,j-1,s1,s2,dp)})+1;
        return dp[i][j]=df(i-1,j-1,s1,s2,dp);
    }
    
    int minDistance(string w1, string w2) {
        int n1=w1.size(),n2=w2.size();
        vector<vector<int>>dp(n1,vector<int>(n2,-1));
        return df(n1-1,n2-1,w1,w2,dp);
        
    }
};