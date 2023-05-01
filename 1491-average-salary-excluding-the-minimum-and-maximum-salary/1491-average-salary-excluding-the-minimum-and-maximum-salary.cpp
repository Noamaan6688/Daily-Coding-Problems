class Solution {
public:
    double average(vector<int>& sa) {
        int c1=0,c2=1e9;
        for(int i=0;i<sa.size();i+=1)
        {
            c1=max(c1,sa[i]);
            c2=min(c2,sa[i]);
        }
        double s=0;
        for (int i=0;i<sa.size();i+=1)
        {
            if (sa[i]!=c1 && sa[i]!=c2) s+=sa[i];
        }
        return s/(sa.size()-2);
    }
};