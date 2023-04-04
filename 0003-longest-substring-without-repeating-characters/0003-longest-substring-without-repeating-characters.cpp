class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()<=1) return s.length();        
         int c=0,c1=0;
         string s1;
         for (int i=0;i<s.size();i+=1)
         {
             if (s1.find(s[i])==-1)
             {
                 s1+=s[i];
                 c1+=1;
                 if (c1>c) c=c1;
             }
             else
             {
                 s1.erase(s1.begin(),s1.begin()+s1.find(s[i])+1);
                 s1+=s[i];
                 c1=s1.size();
             }
         }
         return c;
    }
};