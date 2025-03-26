class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>v;
        for (const auto& i:grid) 
        {
            for (int j:i) v.push_back(j);
        }
        sort(v.begin(),v.end());
        for (int i:v) 
        {
            if (abs(i-v[0])%x!=0) return -1;
        }
        int m=v[v.size()/2],ans=0;
        for (int i:v) ans+=abs(i-m)/x;
        return ans;
    }
};