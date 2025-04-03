class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int maxi=INT_MIN,c=0,n=nums.size();
        long long ans=0;
        for (int i=0;i<n;i+=1) 
        {
            maxi=max(maxi,nums[i]);
            if (i>=2) ans= max(ans,(long long)c*nums[i]); 
            if (i>=1) c=max(c,maxi-nums[i]); 
        }
        
        return ans;
    }
};