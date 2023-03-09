class Solution {
public:
    void df(int i,int j,vector<vector<int>>&v1,vector<vector<int>>&v)
    {
        for (auto &e:v1[j])
        {
            if (v[e].size()==0 || v[e].back()!=i)
            {
                v[e].push_back(i);
                df(i,e,v1,v);
            }
        }
    }
    
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>>v(n),v1(n);
        for (auto i:edges) v1[i[0]].push_back(i[1]);
        for (int i=0;i<n;i+=1) df(i,i,v1,v);
        return v;
    }
};