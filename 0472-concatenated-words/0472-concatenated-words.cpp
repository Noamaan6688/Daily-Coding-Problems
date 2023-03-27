class Solution {
public:
    bool df(string s,unordered_set<string>&st,unordered_map<string,bool>&mp)
    {
        int n=s.size();
        if (mp.count(s)) return mp[s];
        for (int i=1;i<n;i+=1)
        {
            string s1=s.substr(i);
            if ((st.count(s1) || df(s1,st,mp)) && st.count(s.substr(0,i))) return mp[s]=1;
        }
        return mp[s]=0;
    }
    
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string>v;
        if (words.size()==0) return v;
        // unordered_map<string,bool>mp;
        unordered_set<string>st;
        for (auto i:words) st.insert(i);
        
        for (auto i:words)
        {
            int n1=i.size();
            vector<int>v1(n1+1,0);
            v1[0]=1;
            for (int j=0;j<n1;j+=1)
            {
                if (!v1[j]) continue;
                for (int j1=j+1;j1<=n1;j1+=1)
                {
                    if (j1-j<n1 && st.count(i.substr(j,j1-j))) v1[j1]=1;
                }
                if (v1[n1])
                {
                    v.push_back(i);
                    break;
                }
            }
        }
        return v;
    }
};