class Solution {
public:
    vector<int> successfulPairs(vector<int>& sp, vector<int>& po, long long su) {
        int n=sp.size(),m=po.size();
        sort(po.begin(),po.end());
        vector<int>v(n);
        for (int i=0;i<n;i+=1)
        {
            long long c=(su+sp[i]-1)/sp[i];
            if (c>po.back()) continue;
            auto it=lower_bound(po.begin(),po.end(),c);
            v[i]=m-(it-po.begin());
        }
        return v;
    }
};