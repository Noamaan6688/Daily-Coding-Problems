class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) 
    {
        vector<int> a(k,0);
        int ans = INT_MIN;
        for(int i = energy.size()-1;i>=0;i--)
        {
            a[i%k] += energy[i];
            ans = max(a[i%k],ans);
        }
        return ans;
    }
};