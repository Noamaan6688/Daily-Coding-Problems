class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int a=0,b=0,n=grid.size();
        int m=n*n;
        int t=(m*(m+1))/2;
        int s=0;
        unordered_set<int>st;
        for(int i=0;i<n;i+=1)
        {
            for(int j=0;j<n;j+=1)
            {
                if (st.count(grid[i][j])) a=grid[i][j];
                else
                {
                    st.insert(grid[i][j]);
                    s+=grid[i][j];
                }
            }
        }
        b=t-s;
        return {a,b};
    }
};