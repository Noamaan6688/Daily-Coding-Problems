class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long prefix = 0, minVal = 0, maxVal = 0;
        for (int diff : differences) {
            prefix += diff;
            minVal = min(minVal, prefix);
            maxVal = max(maxVal, prefix);
        }
        long ans = upper - lower;
        if (maxVal - minVal > ans) return 0;
        return ans - (maxVal - minVal) + 1;
    }
};