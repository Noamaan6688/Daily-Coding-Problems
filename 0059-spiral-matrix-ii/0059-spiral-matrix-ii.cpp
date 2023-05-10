class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n,-1));
        int c=n*n,i=0,j=0,k=1;
        while (c--)
        {
            while (j<n && v[i][j]==-1) v[i][j]=k,k+=1,j+=1;
            j-=1;i+=1;
            while (i<n && v[i][j]==-1) v[i][j]=k,k+=1,i+=1;
            i-=1;j-=1;
            while (j>=0 && v[i][j]==-1) v[i][j]=k,k+=1,j-=1;
            j+=1;i-=1;
            while (i>=0 && v[i][j]==-1) v[i][j]=k,k+=1,i-=1;
            i+=1;j+=1;
        }
        return v;
    }
};