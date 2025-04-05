class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int c=0;
        for (int i:nums) c|=i;
        int c1=1<<(nums.size()-1);
        return c*c1;
    }
};