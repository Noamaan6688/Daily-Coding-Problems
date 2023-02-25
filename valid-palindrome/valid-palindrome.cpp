class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for (int i=0;i<s.size();i+=1)
        {
            if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')) s1+=tolower(s[i]);
        }
        int n=s1.size();
        for (int i=0;i<n/2;i+=1) if (s1[i]!=s1[n-i-1]) return 0;
        return 1;
    }
};