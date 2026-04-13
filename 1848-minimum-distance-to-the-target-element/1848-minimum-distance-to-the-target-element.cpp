class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int left=start, right=start;
        while (left >= 0 || right<nums.size())
        {
            if (left>-1 && nums[left]==target) return abs(left-start);
            else left--;
            if (right<nums.size() && nums[right]==target) return abs(right-start);
            else right++;
        }
        return start;
    }
};