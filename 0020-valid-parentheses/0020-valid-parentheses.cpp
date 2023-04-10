class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for (auto i:s)
        {
            if (i=='(' || i=='[' || i=='{') st.push(i);
            else
            {
                if (!st.empty())
                {
                    if ((i==')' && st.top()=='(') || (i==']' && st.top()=='[') || (i=='}' && st.top()=='{')) st.pop();
                    else return 0;
                }
                else return 0;
            }
        }
        if (st.empty()) return 1;
        return 0;
    }
};