class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& te) {
        int n=te.size();
        vector<int>v;
        stack<int>st;
        for(int i=n-1;i>=0;i-=1)
        {
              if(st.empty())
              {
                   st.push(i);
                   v.push_back(0);
               }
               else
               {
                   while(!st.empty() && te[i]>=te[st.top()]) st.pop();
                   if(st.empty())
                   {
                       st.push(i);
                       v.push_back(0);
                   }
                   else
                   {
                         v.push_back(st.top()-i);
                         st.push(i);
                   }
               }
        }
      reverse(v.begin(),v.end());
      return v;
    }
};