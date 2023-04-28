class Solution {
public:
     bool df(vector<string>&v,string s)
    {
        for(int i=0;i<v.size();i+=1)
        {
            int c=0;
            string s1=v[i];
            if (s.length()!=s1.length()) return 0;
            if(s==s1) return 1;
            for (int i=0;i<s1.size();i+=1)
            {
                if (s[i]!=s1[i]) c+=1;
            }
            if (c==2) return 1;
        }
        return 0;
    }
    
    int numSimilarGroups(vector<string>& s) 
    {
         int c=0;
         vector<string>v;
         vector<vector<string>>v1; 
         v.push_back(s[0]);
         v1.push_back(v);
         for (int i=1;i<s.size();i+=1)
         {
             string s1=s[i];
             int j=0,c1=0,c2=-1;
             for (j=0;j<v1.size();j+=1)
             {
                 if (df(v1[j],s1)==1)
                 {
                     v1[j].push_back(s1);
                     c2+=1;
                     c1=1;
                 }

             }
             if(!c1)
             {
                 v1.push_back({s1});
                 continue;
             }
             c+=c2;
         } 
        if (c<=v1.size())return v1.size()-c;
        return 1;
    }
};