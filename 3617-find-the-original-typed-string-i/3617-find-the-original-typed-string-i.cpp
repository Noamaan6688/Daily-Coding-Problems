class Solution {
public:
    int possibleStringCount(string word) {
        unordered_map<char,int>mp;
        int res=0;
        for (int i=1;i<word.size();i+=1)
        {
            if (word[i]==word[i-1]) res+=1;
        }
        return res+1;
    }
};