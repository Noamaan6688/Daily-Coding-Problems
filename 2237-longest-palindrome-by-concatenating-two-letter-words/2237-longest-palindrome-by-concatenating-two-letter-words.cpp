class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int c=0,t=0;
        unordered_map<string,int>mp;
        for (auto i:words) mp[i]++;
        for (auto& [i,j]:mp)
        {
            string s=i;
            reverse(s.begin(),s.end());
            if (i==s)
            {
                c+=(j/2)*4;
                if (j%2) t=1;
            }
            else if (s<i && mp[s]) c+=min(j,mp[s])*4;
        }
        return c+t*2;
    }
};