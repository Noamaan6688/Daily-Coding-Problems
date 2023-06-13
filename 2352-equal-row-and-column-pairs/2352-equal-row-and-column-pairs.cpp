class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size(),c=0;
        vector<vector<int>>v=grid;
        for(int i=0;i<n;i+=1)
        {
            for(int j=i;j<n;j+=1) swap(v[i][j],v[j][i]);
        }
        for (int i=0;i<n;i+=1)
        {
            
            for (int j=0;j<n;j+=1)
            {
                if (v[i]==grid[j]) c+=1;
            }
        }
        return c;
    }
};