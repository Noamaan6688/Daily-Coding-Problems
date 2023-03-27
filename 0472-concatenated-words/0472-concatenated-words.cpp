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
        unordered_map<string,bool>mp;
        unordered_set<string>st;
        for (auto i:words) st.insert(i);
        for (auto i:words)
        {
            if (df(i,st,mp)) v.push_back(i);
        }
        return v;
    }
};