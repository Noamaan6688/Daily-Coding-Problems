class Solution {
public:
    int longestCycle(vector<int>& edges) {
        int n=edges.size(),i=0,j=0,k=-1000000000,c=-1,c1=0,c2=0;
        for (i=0;i<n;i+=1)
        {
            c2=i;c1=edges[i];
            if (c1<0) continue;
            j=k;
            while (c1>=0)
            {
                edges[c2]=j;
                c2=c1;
                c1=edges[c1];
                j-=1;
            }
            if (c1!=-1) c=max(c,c1-j);
            k+=1000;
        }
        return c;
    }
};