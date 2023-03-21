class Solution {
public:
    int bestTeamScore(vector<int>& sc, vector<int>& ag) {
        int n=sc.size(),c=0;
        vector<int>dp(n+1,0);
        vector<pair<int,int>>v;
        for (int i=0;i<sc.size();i+=1) v.push_back({ag[i],sc[i]});
        sort(v.begin(),v.end());
        for (int i=0;i<v.size();i+=1)
        {
            dp[i]=v[i].second;
            for (int j=0;j<i;j+=1)
            {
                if (v[j].second<=v[i].second) dp[i]=max(dp[i],dp[j]+v[i].second);
            }
            c=max(c,dp[i]);
        }
        
        return c;
    }
};