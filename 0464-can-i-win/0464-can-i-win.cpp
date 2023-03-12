class Solution {
private:
    int m,t;
    vector<int> dp;
    bool df(int c,int s){
        if(dp[c]!=-1) return dp[c];
        for(int i=0;i<m;i++)
        {
            int c1 = 1<<i;
            if( (c&c1) == 0 )
                    if(s+i+1 >= t or df((c|c1),s+i+1)==false ) return dp[c]=1;
        }
        return dp[c]=0;
    }
public:
    bool canIWin(int mac, int dt) {
        m=mac;
        t=dt;
        if((m*(m+1))/2 < t) return false;
        dp.resize(1<<m,-1);
        return df(0,0);
    }
};