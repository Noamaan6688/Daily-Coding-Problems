class Solution {
public:
    void solve(int i,int j,vector<string>&v,string s) 
    {
        if (i==0 && j==0)
        {
            v.push_back(s);
            return;
        }
        
        if (i>0) solve(i-1,j,v,s+'(');
        if (j>0 && j>i) solve(i,j-1,v,s+')');
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string>v;
        solve(n, n,v,"");
        return v; 
    }
};