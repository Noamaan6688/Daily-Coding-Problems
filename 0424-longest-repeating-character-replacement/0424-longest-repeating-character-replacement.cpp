class Solution {
public:
    int characterReplacement(string s, int k) {
        if (s.size()==0) return 0;
        vector<int>v(200);
        int j=0,c=0;
        for (int i=0;i<s.size();i+=1) 
        {
            v[s[i]]+=1;
            c=max(c,v[s[i]]);
            if (i-j+1-c>k) v[s[j]]--,j+=1;
        }
        return s.size()-j;
    }
};