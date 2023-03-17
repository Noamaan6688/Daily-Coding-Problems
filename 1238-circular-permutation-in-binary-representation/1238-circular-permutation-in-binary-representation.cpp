class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
        int x=pow(2,n)-1;
        vector<int>v(x+1);
        v[0]=start;
        vector<bool>visit(x+1,0);
        visit[v[0]]=1;
        for (int i=1;i<=x;i++)
        {
            int p=1,q=v[i-1];
            bool t=1;
            while (p<=x)
            {
                int r=p^q;
                if (visit[r] == 0)
                {
                    v[i]=r;
                    visit[r]=1;
                    t=0;
                    break;
                }
                p<<=1;
            }
            if (t) v[i]=0;
        }
        return v;
    }
};