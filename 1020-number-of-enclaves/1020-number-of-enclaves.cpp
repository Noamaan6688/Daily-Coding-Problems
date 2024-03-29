class Solution {
public:
    void df(int i,int j,vector<vector<int>>&grid)
    {
        if (i<0 || i==grid.size() || j<0 || j==grid[i].size() || grid[i][j]==0) return;
        grid[i][j]=0;
        df(i+1,j,grid);
        df(i-1,j,grid);
        df(i,j+1,grid);
        df(i,j-1,grid);
    }
    
    
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size(),c=0;
        // vector<vector<int>>visit(m+1,vector<int>(n+1,0));
        // queue<pair<int,int>>q;
        for (int i=0;i<m;i+=1)
        {
            for (int j=0;j<n;j+=1)
            {
                if (i==0 || i==m-1 || j==0 || j==n-1)
                {
                    df(i,j,grid);
                }
            }
        }
        // int c1[]={-1,0,1,0},c2[]={0,-1,0,1};
        // while (!q.empty())
        // {
        //     auto x=q.front().first,y=q.front().second;
        //     q.pop();
        //     for (int i=0;i<4;i+=1)
        //     {
        //         int x1=x+c1[i],y1=y+c2[i];
        //         if (x1>=0 && x1<m && y1>=0 && y1<n && grid[x1][y1]==1 && visit[x1][y1]==0)
        //         {
        //             q.push({x1,y1});
        //             visit[x1][y1]=1;
        //         }
        //     }
        // }
        for (int i=0;i<m;i+=1)
        {
            for (int j=0;j<n;j+=1)
            {
                if (grid[i][j]==1) c+=1;
            }
        }
        return c;
    }
};