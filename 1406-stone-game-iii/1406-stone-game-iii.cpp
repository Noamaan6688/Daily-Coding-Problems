class Solution {
public:
    int df(int i, vector<int> stoneValue, vector<int> &dp)
    {
        if (i == stoneValue.size())
            return 0;
        if (dp[i] != -1)
            return dp[i];
        int score = INT_MIN;
        score = max(score, stoneValue[i] - df(i + 1, stoneValue, dp));
        if (i + 1 < stoneValue.size())
            score = max(score, stoneValue[i] + stoneValue[i + 1] - df(i + 2, stoneValue, dp));
        if (i + 2 < stoneValue.size())
            score = max(score, stoneValue[i] + stoneValue[i + 1] + stoneValue[i + 2] - df(i + 3, stoneValue, dp));
        return dp[i] = score;
    }
    string stoneGameIII(vector<int> &stoneValue)
    {
        int n = stoneValue.size();
        vector<int> dp(n + 1, 0);
        dp[n] = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int score = INT_MIN;
            score = max(score, stoneValue[i] - dp[i + 1]);
            if (i + 1 < stoneValue.size())
                score = max(score, stoneValue[i] + stoneValue[i + 1] - dp[i + 2]);
            if (i + 2 < stoneValue.size())
                score = max(score, stoneValue[i] + stoneValue[i + 1] + stoneValue[i + 2] - dp[i + 3]);
            dp[i] = score;
        }
        return (dp[0] > 0) ? "Alice" : dp[0] == 0 ? "Tie"
                                                  : "Bob";
    }
};