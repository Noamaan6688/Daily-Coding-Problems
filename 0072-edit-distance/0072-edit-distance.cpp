class Solution {
public:
    int minDistance(string w1, string w2) {
        int n1=w1.size(),n2=w2.size();
        vector<int>prev(n2+1,0),curr(n2+1,0);
        for (int i=0;i<=n2;i+=1) prev[i]=i;
        for (int i=1;i<=n1;i+=1)
        {
            curr[0]=i;
            for (int j=1;j<=n2;j+=1)
            {
                if (w1[i-1]!=w2[j-1]) curr[j]=min({prev[j],curr[j-1],prev[j-1]})+1;
                else curr[j]=prev[j-1];
            }
            prev=curr;
        }
        return prev[n2];
    }
};