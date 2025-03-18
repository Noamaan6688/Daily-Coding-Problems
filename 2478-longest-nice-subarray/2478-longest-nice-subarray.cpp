class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int l=0,r=0,ans=0;
        long s=0,c=0;
        while (r<nums.size())
        {
            if ((c|nums[r])==s+nums[r]) 
            {
                c|=nums[r];
                s+=nums[r];
                r+=1;
            } 
            else 
            {
                c&=~nums[l];
                s-=nums[l];
                l+=1;
            }
            ans=max(ans,r-l);
        }
        return ans;
    }
};