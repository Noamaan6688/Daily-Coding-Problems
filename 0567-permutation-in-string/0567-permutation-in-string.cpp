class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size()>s2.size()) return 0;
        vector<int>v1(26,0),v2(26,0);
        for (auto i:s1) v1[i-'a']+=1;
        int i=0,j=0;
        while (j<s2.size())
        {
            v2[s2[j]-'a']+=1;
            if (j-i+1==s1.size())
            {
                if (v1==v2) return 1;
            }
            if (j-i+1<s1.size()) j+=1;
            else
            {
                v2[s2[i]-'a']-=1;
                i+=1;
                j+=1;
            }
        }
        return 0;
    }
};