class Solution 
{
public:
    const int MOD = 1e9 + 7;

    int possibleStringCount(string word, int k) 
    {
        vector<int> groups = getConsecutiveLetters(word);
        long long totalCombinations = 1;
        for (int group : groups) 
        {
            totalCombinations = (totalCombinations * group) % MOD;
        }
        if (k <= groups.size()) 
        {
            return totalCombinations;
        }
        vector<int> dp(k, 0);
        dp[0] = 1;

        for (int i = 0; i < groups.size(); ++i) 
        {
            int group = groups[i];
            vector<int> newDp(k, 0);
            int windowSum = 0;

            for (int j = i; j < k; ++j) 
            {
                newDp[j] = (newDp[j] + windowSum) % MOD;
                windowSum = (windowSum + dp[j]) % MOD;

                if (j >= group) 
                {
                    windowSum = (windowSum - dp[j - group] + MOD) % MOD;
                }
            }

            dp = newDp;
        }
        int invalidCombinations = 0;
        for (int count : dp) 
        {
            invalidCombinations = (invalidCombinations + count) % MOD;
        }
        return (totalCombinations - invalidCombinations + MOD) % MOD;
    }

private:
    vector<int> getConsecutiveLetters(const string& word) 
    {
        vector<int> groups;
        if (word.empty())
        {
            return groups;
        } 

        int count = 1;
        for (int i = 1; i < word.size(); ++i) 
        {
            if (word[i] == word[i - 1]) 
            {
                ++count;
            } 
            else 
            {
                groups.push_back(count);
                count = 1;
            }
        }

        groups.push_back(count);
        return groups;
    }
};