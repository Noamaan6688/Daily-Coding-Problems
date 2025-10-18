#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        ll curr = LLONG_MIN; 
        int ans = 0;
        for (auto x : nums) {
            ll start = x - k;
            ll end = x + k;
            if (max(start, curr) <= end) {
                ans++;
                curr = max(start, curr) + 1; 
            }
        }
        return ans;
    }
};