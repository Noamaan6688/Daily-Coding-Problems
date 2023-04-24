class Solution {
public:
    int lastStoneWeight(vector<int>& st) {
        priority_queue<int>pq(st.begin(),st.end());

        while(pq.size()>1)
        {
            auto i=pq.top();pq.pop();
            auto j=pq.top();pq.pop();
            if(i!=j) pq.push(abs(i-j));
        }
        if (!pq.empty()) return pq.top();
        return 0;
    }
};