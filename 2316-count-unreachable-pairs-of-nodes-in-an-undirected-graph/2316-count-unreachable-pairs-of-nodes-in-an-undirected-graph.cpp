class Solution {
public:
    void df(long long&i,long long&c1,vector<bool>&visit,vector<vector<long long>>&v)
    {
        if (visit[i]) return;
        visit[i]=1;
        c1+=1;
        for (auto &j:v[i]) df(j,c1,visit,v);
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<long long>>v(n+1);
        for (auto i:edges)
        {
            v[i[0]].push_back(i[1]);
            v[i[1]].push_back(i[0]);
        }
        // queue<long long>q;
        vector<bool>visit(n,0);
        long long c=0,c1=0,c2=0;
        for (long long i=0;i<n;i+=1)
        {
            if (visit[i]==0)
            {
                df(i,c1,visit,v);
                c+=c1*(n-c1);
            }
            c1=0;
        }
        return c/2;
    }
};