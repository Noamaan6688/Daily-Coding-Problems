class Solution {
public:
    int dp [301];
    int helper(string s, vector<string> wordDict, int pos){
        if(pos==s.length()) return 1;
        if(dp[pos]!=-1) return dp[pos];

        string temp = "";
        for(int i =pos; i<s.length(); i++)
        {
            temp +=s[i];
            if(find(wordDict.begin(), wordDict.end(),temp)!=wordDict.end()){
                if(helper(s, wordDict, i+1)) return 1;            
            }
        }
        return dp[pos] = 0;        
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        memset(dp, -1, sizeof(dp));
        return helper(s, wordDict, 0);
    }
};