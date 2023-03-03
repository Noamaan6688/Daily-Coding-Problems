class Solution {
public:
    vector<int> findOrder(int nc, vector<vector<int>>& pr) {
        vector<int>v[nc];
        for (auto i:pr) v[i[1]].push_back(i[0]);
        vector<int>v1,v2(nc,0);
        queue<int>q;
        for (int i=0;i<nc;i+=1)
        {
            for (auto j:v[i]) v2[j]+=1;
        }
        for (int i=0;i<nc;i+=1) if (v2[i]==0) q.push(i);
        while (!q.empty())
        {
            int c=q.front();q.pop();
            v1.push_back(c);
            for (auto i:v[c])
            {
                v2[i]-=1;
                if (v2[i]==0) q.push(i);
            }
        }
        if (v1.size()!=nc) return {};
        return v1;
    }
};