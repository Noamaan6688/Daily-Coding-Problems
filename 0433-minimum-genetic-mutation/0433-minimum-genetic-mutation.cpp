class Solution {
public:
    int minMutation(string sg, string eg, vector<string>& ba) {
        unordered_set<string>st{ba.begin(),ba.end()};
        if (st.find(eg)==st.end()) return -1;
        queue<string>q;
        q.push(sg);
        int c=0;
        while (!q.empty())
        {
            int n=q.size();
            while (n--)
            {
                string s1=q.front();q.pop();
                if (s1==eg) return c;
                st.erase(s1);
                for (int i=0;i<8;i+=1)
                {
                    string s2=s1;
                    s2[i]='A';
                    if (st.find(s2)!=st.end()) q.push(s2);
                    s2[i]='C';
                    if (st.find(s2)!=st.end()) q.push(s2);
                    s2[i]='G';
                    if (st.find(s2)!=st.end()) q.push(s2);
                    s2[i]='T';
                    if (st.find(s2)!=st.end()) q.push(s2);
                }
            }
            c+=1;
        }
        return -1;
    }
};