class Solution {
public:
    int longestBalanced(string s) {
        int n = s.length();
        int maxLen = 0 , uniqueCount = 0 , length = 0 , maxFreq = 0;

        vector<int> freq(26, 0);

        for (int start = 0; start < n; start++) {
            uniqueCount = 0 , length = 0 , maxFreq = 0;

            for (int end = start; end < n; end++) {
                int idx = s[end] - 'a';

                if (freq[idx] == 0)
                    uniqueCount++;

                freq[idx]++;
                maxFreq = max(maxFreq, freq[idx]);
                length++;

                if (uniqueCount * maxFreq == length) {
                    maxLen = max(maxLen, length);
                }
            }

            fill(freq.begin(), freq.end(), 0);
        }

        return maxLen;
    }
};