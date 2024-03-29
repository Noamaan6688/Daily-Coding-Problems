class Solution {
public:
    int df(int i,int k,vector<vector<pair<int,int>>>&v)
    {
        int c=0;
        for (auto j:v[i])
        {
            if (j.first==k) continue;
            c+=j.second+df(j.first,i,v);
        }
        return c;
    }
    
    int minReorder(int n, vector<vector<int>>& co) {
        vector<vector<pair<int,int>>>v(n);
        vector<bool>visit(n+1,0);
        for (auto i:co)
        {
            v[i[0]].push_back({i[1],1});
            v[i[1]].push_back({i[0],0});
        }
        queue<pair<int,int>>q;
        q.push({0,0});
        int c=0;
        while (!q.empty())
        {
            auto [x,y]=q.front();q.pop();
            visit[x]=1;
            c+=y;
            for (auto i:v[x])
            {
                if (visit[i.first]==0) q.push(i);
            }
        }
        return c;
    }
};