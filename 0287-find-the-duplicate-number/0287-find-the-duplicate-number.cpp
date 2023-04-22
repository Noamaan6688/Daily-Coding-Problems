class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int c=0;
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size()-1;i+=1)
        {
            if (nums[i]==nums[i+1])
            {
                c=nums[i];
                break;
            }
        }
        return c;
    }
};