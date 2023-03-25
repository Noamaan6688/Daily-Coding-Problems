class Solution {
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<long long>>v(n+1);
        for (auto i:edges)
        {
            v[i[0]].push_back(i[1]);
            v[i[1]].push_back(i[0]);
        }
        queue<long long>q;
        vector<bool>visit(n,0);
        long long c=0,c1=0,c2=0;
        for (long long i=0;i<n;i+=1)
        {
            if (visit[i]==0)
            {
                q.push(i);
                while (!q.empty())
                {
                    int j=q.front();q.pop();
                    visit[j]=1;
                    c1+=1;
                    for (auto k:v[j])
                    {
                        if (visit[k]==0)
                        {
                            q.push(k);
                            visit[k]=1;
                        }
                    }
                    c2=n-c1;
                }
                c+=c1*c2;
            }
            c1=0;
        }
        return c/2;
    }
};