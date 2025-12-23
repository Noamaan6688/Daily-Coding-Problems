#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ev;
    vector<vector<int>> dp;
    vector<int> startT;

    int dfs(int i, int k) {
        if (i == ev.size() || k == 2) return 0;
        if (dp[i][k] != -1) return dp[i][k];

        // skip
        int ans = dfs(i + 1, k);

        // take
        int nextIdx = lower_bound(startT.begin(), startT.end(), ev[i][1] + 1) - startT.begin();
        ans = max(ans, ev[i][2] + dfs(nextIdx, k + 1));

        return dp[i][k] = ans;
    }

    int maxTwoEvents(vector<vector<int>>& events) {
        ev = events;
        sort(ev.begin(), ev.end());
        int n = ev.size();

        startT.resize(n);
        for (int i = 0; i < n; i++) startT[i] = ev[i][0];

        dp.assign(n, vector<int>(3, -1));
        return dfs(0, 0);
    }
};