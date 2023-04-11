class Solution {
public:
    string removeStars(string s) {
        string s1;
        int c=0;
        for (int i=s.size()-1;i>=0;i-=1)
        {
            if (s[i]=='*') c+=1;
            else
            {
                if (c==0) s1+=s[i];
                else c-=1;
            }
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};