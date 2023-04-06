class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        if(m<=2 || n<=2) return 0;
        vector<vector<int>>visit(m,vector<int>(n,0));
        int row[]={-1,0,1,0};
        int col[]={0,1,0,-1};
        int c=0;
        for(int i=1;i<m-1;i++)
        {
            for(int j=1;j<n-1;j++)
            {
                if (grid[i][j]==0 && visit[i][j]==0)
                {
                    bool flag=0;
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    while(!q.empty())
                    {
                        int x=q.front().first,y=q.front().second;
                        q.pop();
                        visit[x][y]=1;
                        for(int k=0;k<4;k++)
                        {
                            int x1=x+row[k];
                            int y1=y+col[k];
                            if(y1>=0 && y1<n && x1>=0 && x1<m && grid[x1][y1]==0 && visit[x1][y1]==0)
                            {
                                visit[x1][y]=1;
                                q.push({x1,y1});
                                if(y1==0 || y1==n-1 || x1==0 || x1==m-1) flag=1;
                            }
                        }
                    }
                    if(!flag) c+=1;
                }
            }
        }
        return c;
    }
};