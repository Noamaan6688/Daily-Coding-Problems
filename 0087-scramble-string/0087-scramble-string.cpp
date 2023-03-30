class Solution {
public:
    bool df(string s1,string s2,unordered_map<string,bool>&mp)
    {
        if (s1==s2) return 1;
        int n1=s1.size(),n2=s2.size();
        if (n1<=1) return 0;
        
        string s=s1;s+=s2;
        if (mp.find(s)!=mp.end()) return mp[s];
        bool c=0;
        for (int i=1;i<n1;i+=1)
        {
            bool c1=(df(s1.substr(0,i),s2.substr(n1-i,i),mp) && df(s1.substr(i,n1-i),s2.substr(0,n1-i),mp));
            bool c2=(df(s1.substr(0,i),s2.substr(0,i),mp) && df(s1.substr(i,n1-i),s2.substr(i,n1-i),mp));
            if (c1 || c2)
            {
                c=1;
                break;
            }
        }
        return mp[s]=c;
    }
    
    bool isScramble(string s1, string s2) {
        if (s1==s2) return 1;
        unordered_map<string,bool>mp;
        bool c=df(s1,s2,mp);
        return c;
    }
};