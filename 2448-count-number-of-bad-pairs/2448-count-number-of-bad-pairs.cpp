class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n);
        for (int i=0;i<n;i+=1) v[i]=nums[i]-i;
        sort(v.begin(),v.end());
        long long ans=0,c=1;
        for (int i=1;i<n;i+=1) 
        {
            if (v[i]==v[i-1]) c+=1;
            else ans+=c*(c-1)/2,c=1;
        }
        ans+=c*(c-1)/2;
        ans=(long long) n*(n-1)/2-ans;
        return ans;
    }
};