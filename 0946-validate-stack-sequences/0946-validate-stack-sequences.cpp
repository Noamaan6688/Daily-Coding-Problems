class Solution {
public:
    bool validateStackSequences(vector<int>& pu, vector<int>& po) {
        int j1=0,j2=0;
        for (int i=0;i<pu.size();i+=1)
        {
            pu[j1]=pu[i];
            j1+=1;
            while (j1>0 && pu[j1-1]==po[j2])
            {
                j1-=1;
                j2+=1;
            }
        }
        return j1==0;
    }
};