class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int>v(82,-1);
        int ans=-1;
        for (auto i:nums) 
        {
            int s=0,c=i;
            while (c) s+=c%10,c/=10;
            if (v[s]!=-1) ans = max(ans,i+v[s]);
            v[s]=max(v[s],i);
        }
        return ans;
    }
};