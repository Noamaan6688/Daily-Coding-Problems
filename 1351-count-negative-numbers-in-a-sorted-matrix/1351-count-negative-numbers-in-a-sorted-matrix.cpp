class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c=0,n=grid.size(),m=grid[0].size();
        for (int i=0;i<n;i+=1)
        {
            int l=0,r=m-1,c1=m;
            for (int j=0;j<m;j+=1)
            {
                int mid=(l+r)/2;
                if (grid[i][mid]<0)
                {
                    r=mid-1;
                    c1=mid;
                }
                else l=mid+1;
            }
            c+=m-c1;
        }
        return c;
    }
};