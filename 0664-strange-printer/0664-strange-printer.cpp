class Solution {
public:
     int solveMem(string &s, int left, int right, vector<vector<int>> &dp)
    {
        if (left == right) return 1;
        int ans = INT_MAX, tmp;
        if (dp[left][right] != -1) return dp[left][right];
        for (int k = left; k < right; k++)
        {
            tmp = solveMem(s, left, k,dp) + solveMem(s, k + 1, right,dp);
            ans = min(ans, tmp);
        }
        if (s[left] == s[right]) ans-=1;
        return dp[left][right]=ans;
    }
    
    int strangePrinter(string s)
    {
        int len = s.size();
        vector<vector<int>> dp(len + 1, vector<int>(len + 1, 0));
        int ans, tmp, right;
        for (int left = len - 1; left >= 0; left-=1)
        {
            dp[left][left] = 1;
            for (int right = left + 1; right < len; right+=1)
            {
                ans = INT_MAX;
                for (int k = left; k < right; k+=1)
                {
                    tmp = dp[left][k] + dp[k + 1][right];
                    ans = min(ans, tmp);
                }
                if (s[left] == s[right]) ans-=1;
                dp[left][right] = ans;
            }
        }
        return dp[0][len - 1];
    }
};