class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans=0,i=0;
        unordered_map<char,int>mp={{'a',0},{'b',0},{'c',0}};
        
        for(int j=0;j<s.length();j+=1) 
        {
            mp[s[j]]++;
            while (mp['a']>0 && mp['b']>0 && mp['c']>0) 
            {
                ans+=s.length()-j;
                mp[s[i]]--;
                i+=1;
            }
        }
        return ans;
    }
};