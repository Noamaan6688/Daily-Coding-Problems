class Solution {
public:
    int characterReplacement(string s, int k) {
        int j=0,c=0,c1=0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i+=1)
        {
            mp[s[i]]++;
            c1=max(c1,mp[s[i]]);
            if(i-j+1-c1>k)
            {
                mp[s[j]]--;
                j+=1;
            }
            c=max(c,i-j+1);
        }
        return c;
    }
};