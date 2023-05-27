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
        int prev1=0,prev2=0,prev3=0;
        for (int i = n - 1; i >= 0; i--)
        {
            int score = INT_MIN;
            score = max(score, stoneValue[i] - prev3);
            if (i + 1 < stoneValue.size())
                score = max(score, stoneValue[i] + stoneValue[i + 1] - prev2);
            if (i + 2 < stoneValue.size())
                score = max(score, stoneValue[i] + stoneValue[i + 1] + stoneValue[i + 2] - prev1);
            prev1=prev2;
            prev2=prev3;
            prev3=score;
        }
        return (prev3 > 0) ? "Alice" : prev3 == 0 ? "Tie": "Bob";
    }
};