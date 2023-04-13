class Solution {
public:
    int carFleet(int ta, vector<int>& po, vector<int>& sp) {
        int n = po.size();
        vector<pair<int,int>>v;
        for (int i=0;i<n;i+=1) v.push_back({po[i],sp[i]});
        stack<double>st;
        sort(v.begin(),v.end());
        for (int i=0;i<n;i+=1)
        {
            double c=(double)(ta-v[i].first)/(double)v[i].second;
            while(!st.empty() && st.top()<=c) st.pop();
            st.push(c);
        }
        return  st.size();
    }
};