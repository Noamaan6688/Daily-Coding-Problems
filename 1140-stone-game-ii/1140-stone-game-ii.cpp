class Solution {
public:
    int rec(vector<int> &piles, int idx, int M, int noOfPiles, vector<vector<int> > &dp){
        if(idx >= noOfPiles) return 0;
        if(dp[idx][M] != -1){
            return dp[idx][M];
        }
        int alexGotStones = INT_MIN;
        int tempSum = 0;
        for(int i = 0; i < 2 * M; i++){
            if(!(idx + i < noOfPiles)) break;
            tempSum += piles[idx + i];
            alexGotStones = max(alexGotStones, tempSum - rec(piles, idx + i + 1, max(i + 1, M), noOfPiles, dp));          
        }
        dp[idx][M] = alexGotStones;
        return alexGotStones;
    }
    
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        vector<vector<int> > dp(n + 1, vector<int>(n + 1, -1000001));
        vector<int> suffSum(n + 1);
        int sum = 0;
        for(int i = n - 1; i >= 0; i-=1)
        {
            sum += piles[i];
            suffSum[i] = sum;
        }
        for(int i = 0; i <= n; i+=1) dp[n][i] = 0;
        for(int i = n - 1; i >= 0; i-=1)
        {
            for(int M = 1; M <= n; M+=1)
            {
                for(int x = 1; x <= 2 * M && i + x <= n; x+=1)
                {
                    dp[i][M] = max(dp[i][M], (suffSum[i] - suffSum[i + x]) - dp[i + x][max(x, M)]);
                }
            }
        }
        return (sum + dp[0][1]) / 2;
    }
};