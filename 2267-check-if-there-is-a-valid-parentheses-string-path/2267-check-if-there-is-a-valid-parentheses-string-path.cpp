class Solution {
public:
    bool hasValidPath(vector<vector<char>>& grid) {
        int visit[101][101][101]={};
        int m=grid.size(),n=grid[0].size();
        queue<tuple<int,int,int>>q;
        if (grid[0][0]=='(') q.push({0,0,1});
        else return 0;
        while (!q.empty())
        {
            auto [i,j,k]=q.front();q.pop();
            if (k<0 || k>(m+n)/2 || visit[i][j][k]) continue;
            visit[i][j][k]=1;
            if (i==m-1 && j==n-1 && k==0) return 1;
            if (i<m-1)
            {
                if (grid[i+1][j]=='(') q.push({i+1,j,k+1});
                else q.push({i+1,j,k-1});
            }
            if (j<n-1)
            {
                if (grid[i][j+1]=='(') q.push({i,j+1,k+1});
                else q.push({i,j+1,k-1});
            }
        }
        return 0;
    }
};