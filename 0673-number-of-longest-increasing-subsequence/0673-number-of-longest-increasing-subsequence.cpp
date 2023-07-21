class Solution {
public:
    pair<int, int> solve(vector<int>&nums, vector<int>&length, vector<int>&count, int currIdx)
    {
        if (length[currIdx] != -1) return {length[currIdx], count[currIdx]};
        
        int LISLen = 1, LISCount = 1;
        for (int i = currIdx + 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[currIdx])
            {
                pair<int, int>nextLenCount = solve(nums, length, count, i);
                int currLen = 1 + nextLenCount.first; 
                if (currLen > LISLen)
                {
                    LISLen = currLen;
                    LISCount = nextLenCount.second; 
                }
                else if (currLen == LISLen) 
                    LISCount = LISCount + nextLenCount.second;
            }
        }
        length[currIdx] = LISLen; count[currIdx] = LISCount;
        return {LISLen, LISCount};
    }
    int findNumberOfLIS(vector<int>& nums) 
    {
        int n = nums.size(), maxLISLen = 1;
        unordered_map<int, int>mp;
        vector<int>length(n, -1), count(n, -1);
        for (int start = 0; start < n; start++)
        {
            pair<int, int>lenCountPair  = solve(nums, length, count, start);
            int LISLen = lenCountPair.first, LISCount = lenCountPair.second;
            mp[LISLen] += LISCount;
            maxLISLen = max(maxLISLen, LISLen);
        }
        return mp[maxLISLen];
        
    }
};