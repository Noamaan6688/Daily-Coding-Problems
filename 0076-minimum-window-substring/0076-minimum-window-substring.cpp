class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>v(128,0);
        int c=INT_MAX,i=0;
        for (i=0;i<t.size();i+=1) v[t[i]]++;
        int i1=0,n=t.size(),j=0;
        i=0;
        while (j<s.size())
        {
            if (v[s[j++]]-->0) n-=1; 
            while (n==0)
            { 
                if ((j-i)<c) c=j-(i1=i);
                if (v[s[i++]]++==0) n+=1;
            }
        }
        if (c==INT_MAX) return "";
        return s.substr(i1,c);
    }
};