class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long int s=0,c=0;
        for (int i=0;i<nums.size();i+=1)
        {
            s+=nums[i];
            c=max(c,(s+i)/(i+1));
        }
        return c;
    }
};