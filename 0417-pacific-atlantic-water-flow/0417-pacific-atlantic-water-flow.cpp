class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& he) {
        int n1=he.size(),n2=he[0].size();
        vector<vector<int>> visit1(n1,vector<int>(n2,0)),visit2(n1,vector<int>(n2,0));
        queue<pair<int,int>>q;
        for (int i=0;i<n1;i+=1)
        {
            visit1[i][n2-1]=1;
            q.push({i,n2-1});
        }
        for (int i=0;i<n2;i+=1)
        {
            visit1[n1-1][i]=1;
            q.push({n1-1,i});
        }
        while (!q.empty())
        {
            int x=q.front().first,y=q.front().second;
            q.pop();
            for (int i=-1;i<=1;i+=1)
            {
                for (int j=-1;j<=1;j+=1)
                {
                    if (i==0 || j==0)
                    {
                        int x1=x+i,y1=y+j;
                        if (x1>=0 && y1>=0 && x1<n1 && y1<n2)
                        {
                            if (visit1[x1][y1]==0 && he[x1][y1]>=he[x][y])
                            {
                                visit1[x1][y1]=1;
                                q.push({x1,y1});
                            }
                        }
                    }
                }
            }
        }
        
        
        
        for (int i=0;i<n1;i+=1)
        {
            visit2[i][0]=1;
            q.push({i,0});
        }
        for (int i=0;i<n2;i+=1)
        {
            visit2[0][i]=1;
            q.push({0,i});
        }
        while (!q.empty())
        {
            int x=q.front().first,y=q.front().second;
            q.pop();
            for (int i=-1;i<=1;i+=1)
            {
                for (int j=-1;j<=1;j+=1)
                {
                    if (i==0 || j==0)
                    {
                        int x1=x+i,y1=y+j;
                        if (x1>=0 && y1>=0 && x1<n1 && y1<n2)
                        {
                            if (visit2[x1][y1]==0 && he[x1][y1]>=he[x][y])
                            {
                                visit2[x1][y1]=1;
                                q.push({x1,y1});
                            }
                        }
                    }
                }
            }
        }
        vector<vector<int>>v;
        for (int i=0;i<n1;i+=1)
        {
            for (int j=0;j<n2;j+=1)
            {
                if (visit1[i][j] && visit2[i][j]) v.push_back({i,j});
            }
        }
        return v;
    }
};