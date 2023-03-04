class Solution {
public:
    int coinChange(vector<int>& coins, int k) {
        if (k==0) return 0;
        if (coins.size()==1) return k%coins[0]==0 ?k/coins[0] : -1;
        int c=0;
        queue<int>q;
        q.push(k);
        unordered_set<int>st;
        while (!q.empty())
        {
            int n=q.size();
            while (n--)
            {
                auto d=q.front();q.pop();
                for (auto j:coins)
                {
                    if ((d-j)==0) return c+1;
                    else if (st.find(d-j)!=st.end()) continue;
                    else if ((d-j)>0)
                    {
                        q.push(d-j);
                        st.insert(d-j);
                    }
                    else continue;
                }
            }
            c+=1;
        }
        return -1;
    }
};