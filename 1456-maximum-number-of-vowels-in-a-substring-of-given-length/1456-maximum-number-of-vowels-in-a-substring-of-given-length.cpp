class Solution {
public:
    int maxVowels(string s, int k) {
        int c1=0,c=0;
        // vector<int>v;
        int i=0,j=0;
        while (j<s.size())
        {
            if (s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') c1+=1;
            if (j-i==k)
            {
                if (s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') c1-=1;            
                i+=1;
            }
            c=max(c,c1);
            j+=1;
        }
        
        
        return c;
    }
};