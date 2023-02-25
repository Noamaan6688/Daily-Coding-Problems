class Solution {
public:
    int myAtoi(string s) {
        long double c=0,t=0,i=0;
        while (s[i]==' ') i+=1;
        if (s[i]=='-' || s[i]=='+')
        {
            if (s[i]=='-') t=1;
            i+=1;
        }
        while (i<s.size())
        {
            if (s[i]>='0' && s[i]<='9') c=c*10+(s[i]-'0');
            else break;
            i+=1;
        }
        if (t==1) c=-c;
        if (c<INT_MIN) c=INT_MIN;
        if (c>INT_MAX) c=INT_MAX;
        return c;
    }
};