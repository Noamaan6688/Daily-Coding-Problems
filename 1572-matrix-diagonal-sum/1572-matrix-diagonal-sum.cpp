class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s=0,c1=0,c2=mat[0].size()-1;
        for (int i=0;i<mat.size();i+=1)
        {
            for (int j=0;j<mat[0].size();j+=1)
            {
                if (i==j)
                {
                    s+=mat[i][j];
                    if (i==c1 && j==c2) c1+=1,c2-=1;
                }
                else if (i==c1 && j==c2) s+=mat[i][j],c1+=1,c2-=1;
            }
        }
        return s;
    }
};