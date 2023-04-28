class Solution {
public:
     bool df(string&s1,string&s2)
    {
        int c=0;
        for (int i=0;i<s1.size();i+=1)
        {
            if (s1[i]!=s2[i]) c+=1;
        }
        if (c==2 || c==0) return 1;
        return 0;
    }
    
    int numSimilarGroups(vector<string>&s) 
    {
        int c=0,n=s.size();
        vector<bool>visit(n+1,0);
        queue<string>q;
        for (int i=0;i<n;i+=1)
        {
            if (visit[i]==0)
            {
                visit[i]=1;
                c+=1;
                q.push(s[i]);
                while (q.size())
                {
                    string s1=q.front();q.pop();
                    for (int j=0;j<n;j+=1)
                    {
                        if (df(s1,s[j]) && visit[j]==0) visit[j]=1,q.push(s[j]);
                    }
                }
            }
        }
        return c;
    }
};