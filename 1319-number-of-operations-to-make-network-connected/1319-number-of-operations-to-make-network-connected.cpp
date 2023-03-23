class Solution {
public:
    void df(int i,vector<bool>&visit,vector<vector<int>>&v)
    {
        visit[i]=1;
        for (auto j:v[i])
        {
            if (visit[j]==0) df(j,visit,v);
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& co) {
        if (co.size()<n-1) return -1;
        int c=0;
        vector<vector<int>>v(n+1);
        vector<bool>visit(n+1,0);
        for (auto i:co)
        {
            v[i[0]].push_back(i[1]);
            v[i[1]].push_back(i[0]);
        }
        for (int i=0;i<n;i+=1)
        {
            if (visit[i]==0)
            {
                df(i,visit,v);
                c+=1;
            }
        }
        return c-1;
    }
};