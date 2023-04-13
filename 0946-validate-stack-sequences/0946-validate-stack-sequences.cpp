class Solution {
public:
    bool validateStackSequences(vector<int>& pu, vector<int>& po) {
        stack<int>st;
        int j=0;
        for (int i=0;i<pu.size();i+=1)
        {
            st.push(pu[i]);
            while (st.size()>0 && st.top()==po[j])
            {
                st.pop();
                j+=1;
            }
        }
        return st.size()==0;
    }
};