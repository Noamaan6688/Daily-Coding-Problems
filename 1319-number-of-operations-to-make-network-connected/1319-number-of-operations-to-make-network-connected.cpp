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
                queue<int>q;
                q.push(i);
                visit[i]=1;
                c+=1;
                while (!q.empty())
                {
                    int j=q.front();q.pop();
                    for (auto k:v[j])
                    {
                        if (visit[k]==0)
                        {
                            q.push(k);
                            visit[k]=1;
                        }
                    }
                }
            }
        }
        return c-1;
    }
};