class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int>v;
        int n=mat.size(),m=mat[0].size();
        int i1=0,i2=m-1,j1=0,j2=n-1,c=1;
        while (i1<=i2 && j1<=j2)
        {
            if (c==1)
            {
                for (int i=i1;i<=i2;i+=1) v.push_back(mat[j1][i]);
                c=2;
                j1+=1;
            }
            else if (c==2)
            {
                for (int i=j1;i<=j2;i+=1) v.push_back(mat[i][i2]);
                i2-=1;
                c=3;
            }
            else if (c==3)
            {
                for (int i=i2;i>=i1;i-=1) v.push_back(mat[j2][i]);
                j2-=1;
                c=4;
            }       
            else
            {
                for (int i=j2;i>=j1;i-=1) v.push_back(mat[i][i1]);
                i1+=1;
                c=1;
            }
        }
        return v;
    }
};