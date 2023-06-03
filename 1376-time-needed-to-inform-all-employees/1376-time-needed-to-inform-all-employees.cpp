class Solution {
    vector<int> dp;
    int dfs(int i, int headID, vector<int> &manager, vector<int>& informTime){
        if(i == -1) return 0;

        if(dp[i] != -1) return dp[i];
        int ans = informTime[i] + dfs(manager[i], headID, manager, informTime); 
        return dp[i] = ans;
    }
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        dp = vector<int>(n, -1);
        int ans = 0;
        for(int i = 0; i<n; i++)
        {
            if(informTime[i] == 0) ans = max(ans, dfs(i, headID, manager, informTime));
        }

        return ans;
    }
};