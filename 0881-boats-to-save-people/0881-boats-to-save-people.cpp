class Solution {
public:
    int numRescueBoats(vector<int>& pe,int li) {
        int c=0,c1=0;
        vector<int>v(li+1,0);
        for (auto i:pe) v[i]+=1;
        for (int i=1;i<=li;i+=1)
        {
            while(v[i]--) pe[c1]=i,c1+=1;
        }
        int i=0,j=pe.size()-1;
        while(i<=j)
        {
            if(pe[i]+pe[j]<=li) i+=1,j-=1;
            else j-=1;
            c+=1;
        }
        return c;
    }
};