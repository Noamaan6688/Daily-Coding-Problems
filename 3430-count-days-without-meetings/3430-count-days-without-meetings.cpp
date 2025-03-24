class Solution {
    public:
        int countDays(int days, vector<vector<int>> &nums) {
            int c=0,s=1;
            sort(nums.begin(),nums.end());
            for (auto &queries: nums)
            {
                c+=max(0, queries[0]-s);
                s=max(s,queries[1]+1); 
                if (s>days) break;
            }
            return c+max(0,days-s+1);
        }
};