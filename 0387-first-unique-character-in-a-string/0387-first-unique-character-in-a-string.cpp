class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>v(26,0);
        for (int i=0;i<s.size();i+=1) v[s[i]-'a']+=1;
        for (int i=0;i<s.size();i+=1) if (v[s[i]-'a']==1) return i;
        return -1;
    }
};