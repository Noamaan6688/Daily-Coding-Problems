class Solution {
public:
    int df(vector<int>&ds,int i) 
    {
        if (ds[i]<0) return i;
        return ds[i]=df(ds,ds[i]);
    }
    
    vector<bool> distanceLimitedPathsExist(int n, vector<vector<int>>& edges,vector<vector<int>>& qs) {
    multimap<int, array<int, 3>> mm;
    for (auto i = 0; i < qs.size();i+=1)
        mm.insert({qs[i][2], {qs[i][0], qs[i][1], i}
    }
);
    sort(begin(edges), end(edges), [](vector<int> &a, vector<int> &b) { return a[2] < b[2]; 
    });
    vector<int> ds(n, -1);
    vector<bool> res(qs.size());
    int ei = 0;
    for (auto &q : mm) {
        while (ei < edges.size() && edges[ei][2] < q.first) 
        {
            int i = df(ds,edges[ei][0]),j=df(ds,edges[ei][1]);
            if (i!=j) 
            {
                ds[i]+=ds[j];
                ds[j]=i;
            }
            ei+=1;
        }
        res[q.second[2]]=df(ds,q.second[0])==df(ds,q.second[1]);
    }
    return res;
}
};