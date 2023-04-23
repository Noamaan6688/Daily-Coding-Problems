class Solution {
public:
    int mod=1000000007;
    int df(int i,int k,string&s,vector<int>&dp)
    {
        if (i==s.size()) return 1;
        if (dp[i]!=-1) return dp[i];
        long long int c=0,c1=0;
        for (int j=i;j<s.size();j+=1)
        {
            int c2=s[j]-'0';
            c1=(c1*10)+c2;
            if (c1<1 || c1>k) break;
            int c3=df(j+1,k,s,dp)%mod;
            c=(c+c3)%mod;
        }
        return dp[i]=c;
    }
    
    
    int numberOfArrays(string s, int k) {
        vector<int>dp(s.size()+1,0);
        dp[s.size()]=1;
        for (int i=s.size()-1;i>=0;i-=1)
        {
            long long int c=0,c1=0;
            for (int j=i;j<s.size();j+=1)
            {
                int c2=s[j]-'0';
                c1=c1*10+c2;
                if (c1<1 || c1>k) break;
                c=(c+dp[j+1])%mod;
            }
            dp[i]=c;
        }
        // int c=df(0,k,s,dp);
        return dp[0];
    }
};