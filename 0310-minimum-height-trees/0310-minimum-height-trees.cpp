class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int>v;
        if (n==0) return v;
        if (n==1) return {0};
        vector<int>v1(n,0);
        vector<vector<int>>v2(n);
        for (auto i:edges)
        {
            v2[i[0]].push_back(i[1]);
            v2[i[1]].push_back(i[0]);
            v1[i[0]]+=1;
            v1[i[1]]+=1;
        }
        queue<int>q;
        for (int i=0;i<n;i+=1) if (v1[i]==1) q.push(i);
        while (!q.empty())
        {
            int k=q.size();
            v.clear();
            for (int i=0;i<k;i+=1)
            {
                int c=q.front();q.pop();
                v.push_back(c);
                for (auto j:v2[c])
                {
                    v1[j]-=1;
                    if (v1[j]==1) q.push(j);
                }
            }
        }
        return v;
    }
};