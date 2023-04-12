class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        string s;
        for (int i=0;i<path.size();i+=1)
        {
            if (path[i] == '/') continue;
            string s1;
            while (i<path.size() && path[i]!='/')
            {
                s1+=path[i];
                i+=1;
            }
            if (s1==".") continue;
            else if (s1=="..")
            {
                if (!st.empty()) st.pop();
            }
            else st.push(s1);
        }
        while (!st.empty())
        {
            s="/"+st.top()+s;
            st.pop();
        }
        if (s.size()==0) return "/";
        return s;
    }
};