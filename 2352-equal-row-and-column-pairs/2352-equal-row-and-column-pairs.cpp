class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size(),c=0;
        map<vector<int>,int>mp;
        for(int i=0;i<grid.size();i+=1) mp[grid[i]]++;
        for(int j =0;j<grid[0].size();j+=1)
        {
            vector<int>v;
            for(int i=0;i<grid.size();i+=1)
            {
                v.push_back(grid[i][j]);
            }
            c+=mp[v];
        }
        return c;
    }
};