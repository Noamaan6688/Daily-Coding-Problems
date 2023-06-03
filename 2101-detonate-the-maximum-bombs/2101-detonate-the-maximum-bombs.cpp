class Solution {
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        queue<vector<int>> q;

        int count = 0;
        int ans = 0;
        for(int i = 0; i < n ; i++)
        {
            vector<bool> detonated(n,false);
            q.push(bombs[i]);
            detonated[i] = true;
            count = 1;
            while(!q.empty())
            {
                auto it = q.front();
                q.pop();
                for(int j = 0; j  < n; j++)
                {
                    if(!detonated[j] && sqrt(pow(bombs[j][0] - it[0], 2) + pow(bombs[j][1] - it[1],2)) <= it[2]){
                        detonated[j] = true;
                        q.push(bombs[j]);
                        count++;
                    };
                }
            }

            ans = max(ans, count);
                
        }
        return ans;
        
    }
};