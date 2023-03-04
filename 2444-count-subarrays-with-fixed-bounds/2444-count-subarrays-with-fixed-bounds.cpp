class Solution {
public:
    long long countSubarrays(vector<int>& nums, int mi, int ma) {
        int n=nums.size(),c1=-1,c2=-1,c3=-1;
        long long c=0;
        for (int i=0;i<n;i+=1)
        {
            if (nums[i]>=mi && nums[i]<=ma)
            {
                if (nums[i]==mi) c2=i;
                if (nums[i]==ma) c3=i;
                c+=max(0,min(c2,c3)-c1);
            }
            else c1=i,c2=-1,c3=-1;
        }
        return c;
    }
};