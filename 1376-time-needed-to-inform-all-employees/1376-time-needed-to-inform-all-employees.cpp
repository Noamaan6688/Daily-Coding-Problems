class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> adj(n);
        for(int i = 0; i<n; i++){
            if(i == headID) continue;
        
            adj[manager[i]].push_back(i);
        }

        queue<pair<int, int>> q;
        q.push({headID, 0});

        int ans = 0;
        while(!q.empty()){
            auto [node, currTime] = q.front();
            q.pop();

            int newTime = currTime + informTime[node];
            ans = max(ans, newTime);
            for(auto j : adj[node])
                q.push({j, newTime});
        }

        return ans;
    }
};