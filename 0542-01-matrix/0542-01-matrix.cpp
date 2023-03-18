class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size(),m=mat[0].size();
        int v1[]={-1,0,1,0},v2[]={0,1,0,-1};
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>visit(n,vector<int>(m,0));
        vector<vector<int>>v(n,vector<int>(m,0));
        for (int i=0;i<n;i+=1)
        {
            for (int j=0;j<m;j+=1)
            {
                if (mat[i][j]==0) q.push({{i,j},0}),visit[i][j]=1;
            }
        }
        while (q.size()!=0)
        {
            int i=q.front().first.first,j=q.front().first.second,c=q.front().second;
            q.pop();
            v[i][j]=c;
            for (int k=0;k<4;k+=1)
            {
                int c1=i+v1[k],c2=j+v2[k];
                if (c1>=0 && c1<n && c2>=0 && c2<m && visit[c1][c2]==0)
                {
                    visit[c1][c2]=1;
                    q.push({{c1,c2},c+1});
                }
            }
        }
        return v;
    }
};