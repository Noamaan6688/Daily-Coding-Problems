class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long c=0,c1=0;
        for (int i=0;i<nums.size();i+=1)
        {
            if (nums[i]==0) c1+=1;
            else
            {
                c+=c1*(c1+1)/2;
                c1=0;
            }
        }
        if (c1!=0) c+=c1*(c1+1)/2;
        return c;
    }
};