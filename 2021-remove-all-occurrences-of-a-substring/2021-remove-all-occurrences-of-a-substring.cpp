class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans;
        int n=part.size();
        char ch=part.back();
        for (char i:s) 
        {
            ans.push_back(i);
            if (i==ch && ans.size()>=n) 
            {
                if (ans.substr(ans.size()-n)==part) ans.erase(ans.size()-n);
            }
        }
        return ans;
    }
};