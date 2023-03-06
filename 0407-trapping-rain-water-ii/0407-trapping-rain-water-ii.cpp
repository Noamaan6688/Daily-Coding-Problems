class Solution {
public:
    int trapRainWater(vector<vector<int>>& hm) { 
        priority_queue<pair<int,pair<int,int>> ,vector<pair<int,pair<int,int>>> ,greater<pair<int,pair<int,int>>> >pq;
        int n=hm.size(),m=hm[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        for (int i=0;i<n;i+=1)
        {
            for (int j=0;j<m;j+=1)
            {
                if (i==0 || j==0 || i==n-1 || j==m-1)
                {
                    visit[i][j]=1;
                    pq.push({hm[i][j],{i,j}});
                }
            }
        }
        vector<pair<int,int>>d={{0,1},{1,0},{-1,0},{0,-1}};
        int c=0;
        while (!pq.empty())
        {
            auto i=pq.top();pq.pop();
            int c1=i.first,c2=i.second.first,c3=i.second.second;
            for (int j=0;j<4;j+=1)
            {
                int x1=c2+d[j].first,y1=c3+d[j].second;
                if (x1<0 || y1<0 || x1==n || y1==m || visit[x1][y1]) continue;
                if (hm[x1][y1]<c1)
                {
                    c+=c1-hm[x1][y1];
                    pq.push({c1,{x1,y1}});
                }
                else pq.push({hm[x1][y1],{x1,y1}});
                visit[x1][y1]=1;
            }
        }
        return c;                                 
    }
};