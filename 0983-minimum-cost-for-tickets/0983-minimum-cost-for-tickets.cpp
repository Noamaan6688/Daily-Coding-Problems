class Solution {
public:
    int df(int i,int n,vector<int>&ds,vector<int>&cs,vector<int>&dp)
    {
        if (i>=n) return 0;
        if (dp[i]!=-1) return dp[i];
        int c1=0,c2=0,c3=0,j1=0,j2=0;
        c1=cs[0]+df(i+1,n,ds,cs,dp);
        for (j1=i;j1<n;j1+=1)
        {
            if (ds[j1]>=ds[i]+7) break;
        }
        c2=cs[1]+df(j1,n,ds,cs,dp);
        for (j2=i;j2<n;j2+=1)
        {
            if (ds[j2]>=ds[i]+30) break;
        }
        c3=cs[2]+df(j2,n,ds,cs,dp);
        return dp[i]=min({c1,c2,c3});
    }
    
    int mincostTickets(vector<int>& ds, vector<int>& cs) {
        int n=ds.size();
        vector<int>dp(n+1,-1);
        int c=df(0,n,ds,cs,dp);
        return c;
    }
};