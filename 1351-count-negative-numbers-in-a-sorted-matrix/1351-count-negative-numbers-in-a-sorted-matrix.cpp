class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c=0,n=grid.size(),m=grid[0].size();
        for (int i=0;i<n;i+=1)
        {
            for (int j=0;j<m;j+=1)
            {
                if (grid[i][j]<0) c+=1;
            }
        }
        return c;
    }
};