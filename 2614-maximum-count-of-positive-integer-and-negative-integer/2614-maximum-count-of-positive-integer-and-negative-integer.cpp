class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int c=0,n=nums.size();
        for (int i=0;i<n;i+=1) 
        {
            if (nums[i]==0) continue;
            else if (c==0 && nums[i]>=0) return n-i;
            else if (nums[i]<0) c+=1;
            else if (nums[i]>0) return max(c,n-i);
        }
        return max(c,0);
    }
};