class Solution {
public:
    string convert(string s, int nr) {
        if (nr<=1) return s;
        vector<string>v(nr,"");
        int j=0,c=-1;
        for (int i=0;i<s.size();i+=1)
        {
            if (j==0 || j==nr-1) c*=-1;
            v[j]+=s[i];
            if (c==1) j+=1;
            else j-=1;
        }
        string s1;
        for (auto i:v) s1+=i;
        return s1;
    }
};