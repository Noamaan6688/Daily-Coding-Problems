class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int c=0,c1=0;
        for (int i=0;i<gain.size();i+=1)
        {
            c1+=gain[i];
            c=max(c,c1);
        }
        return c;
    }
};