class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>>v(grid.size(),vector<int>(grid[0].size(),0));
        queue<pair<int,int>>q;
        int c=0;
        for (int i=0;i<grid.size();i+=1)
        {
            for (int j=0;j<grid[0].size();j+=1)
            {
                if (v[i][j]==0 && grid[i][j]=='1')
                {
                    q.push({i,j});
                    v[i][j]=1;
                    c+=1;
                    while (!q.empty())
                    {
                        int a=q.front().first,b=q.front().second;q.pop();
                        if (a>0 && v[a-1][b]==0 && grid[a-1][b]=='1')
                        {
                            q.push({a-1,b});
                            v[a-1][b]=1;
                        }
                        if (b>0 && v[a][b-1]==0 && grid[a][b-1]=='1')
                        {
                            q.push({a,b-1});
                            v[a][b-1]=1;
                        }
                        if (a<grid.size()-1 && v[a+1][b]==0 && grid[a+1][b]=='1')
                        {
                            q.push({a+1,b});
                            v[a+1][b]=1;
                        }
                        if (b<grid[0].size()-1 && v[a][b+1]==0 && grid[a][b+1]=='1')
                        {
                            q.push({a,b+1});
                            v[a][b+1]=1;
                        }
                    }
                }
            }
        }
        return c;
    }
};