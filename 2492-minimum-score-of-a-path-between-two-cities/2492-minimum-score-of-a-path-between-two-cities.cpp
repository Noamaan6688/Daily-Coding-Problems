class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        int c=INT_MAX;
        vector<vector<pair<int,int>>>v(n+1);
        vector<int>visit(n+1,0);
        queue<int>q;
        q.push(1);
        visit[1]=1;
        for (auto i:roads)
        {
            v[i[0]].push_back({i[1],i[2]});
            v[i[1]].push_back({i[0],i[2]});
        }
        while (!q.empty())
        {
            int i=q.front();q.pop();
            for (auto [x,y]:v[i])
            {
                c=min(c,y);
                if (visit[x]==0)
                {
                    visit[x]=1;
                    q.push(x);
                }
            }
        }
        return c;
    }
};