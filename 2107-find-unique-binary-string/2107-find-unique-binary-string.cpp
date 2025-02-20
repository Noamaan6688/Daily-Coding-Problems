class Solution {
    string fun(vector<string>& nums, vector<string>& dp, int i,const string& s, set<string>& sets) {
        if (i<0) return s;
        if (i==0) 
        {
            if (sets.find(s)==sets.end()) return s;
            return "";
        }
        if (!dp[i].empty()) return dp[i];
        string s1=s+'0';
        dp[i]=fun(nums,dp,i-1,s1,sets);
        if (!dp[i].empty()) return dp[i];
        string s2=s+'1';
        dp[i]=fun(nums,dp,i-1,s2,sets);
        return dp[i];
    }

public:
    string findDifferentBinaryString(vector<string>& nums) {
        set<string>sets(nums.begin(),nums.end());
        vector<string>dp(nums.size()+1,"");
        string s="";
        return fun(nums,dp,nums.size(),s,sets);
    }
};