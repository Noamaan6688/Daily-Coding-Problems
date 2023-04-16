class Solution {
public:
    long long MOD = 1000000007;
    int df(vector<vector<int>>&v,vector<vector<int>>&dp, string& ta, int i, int j)
    {
        if (j==ta.size()) return 1; 
        if (i==v.size()) return 0;  
        if (dp[i][j]!=-1) return dp[i][j];
        char ch=ta[j];
        int c1=df(v,dp,ta,i+1,j);
        int c2=0;
        if (v[i][ch-'a']!=0)
        {
            int c3=v[i][ch-'a'];
            int c4=df(v,dp,ta,i+1,j+1);
            c2=(c3*(long long)c4)%MOD;
        }
        return dp[i][j]=((c2+(long long)c1)%MOD);
        
    }
    int numWays(vector<string>& words, string ta) 
    {
        int m=words.size(),n=words[0].size();
        vector<vector<int>>v(n, vector<int>(26, 0));
        vector<vector<int>>dp(n+1,vector<int>(ta.size()+1,-1));
        for (int i=0;i<m;i+=1)
        {
            for (int j=0;j<n;j+=1)
            {
                char ch=words[i][j];
                v[j][ch-'a']+=1; 
            }
        }
        int c=df(v,dp,ta,0, 0);
        return c;
    }
};