class Solution {
public:
    int df(vector<int>&sa,int i,int c,vector<vector<int>>&dp) {
      if(i==sa.size()) return 0;
      if(dp[i][c]!=-1) return dp[i][c];
      return dp[i][c]=max(df(sa,i+1,c,dp),sa[i]*(c)+df(sa,i+1,c+1,dp));
  }

  int maxSatisfaction(vector<int>&sa){
      int n=sa.size();
      vector<vector<int>>dp(n,vector<int>(n+1,-1));
      sort(sa.begin(),sa.end());
      return df(sa,0,1,dp);
  }
};