class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        sort(begin(nums), end(nums));
        do res.push_back(nums);
        while (next_permutation(nums.begin(),nums.end()));

        return res;
    }
};