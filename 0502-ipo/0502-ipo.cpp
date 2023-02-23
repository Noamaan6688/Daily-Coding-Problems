class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& pr, vector<int>& ca) {
        int n=pr.size();
        vector<pair<int,int>>v;
        for (int i=0;i<n;i+=1) v.push_back({ca[i],pr[i]});
        sort(v.begin(),v.end());
        priority_queue<int>pq;
        int i=0;
        while (k--)
        {
            while (v[i].first<=w && i<n) pq.push(v[i].second),i+=1;
            if (pq.empty()) break;
            w+=pq.top();pq.pop();
        }
        return w;
    }
};