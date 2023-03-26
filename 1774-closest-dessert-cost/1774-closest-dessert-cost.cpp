class Solution {
public:
    void df(int i,int ta,int &c,int k,vector<int>&tc)
    {
        if (abs(ta-c)>abs(ta-k)) c=k;
        else if (abs(ta-c)==abs(ta-k)) c=min(c,k);
        if (i==tc.size()) return;
        df(i+1,ta,c,k,tc);
        df(i+1,ta,c,k+tc[i],tc);
        df(i+1,ta,c,k+tc[i]+tc[i],tc);
    }
    
    int closestCost(vector<int>& bc, vector<int>& tc, int ta) {
        int c=10000000;
        for (int i=0;i<bc.size();i+=1)
        {
            df(0,ta,c,bc[i],tc);
        }
        return c;
    }
};