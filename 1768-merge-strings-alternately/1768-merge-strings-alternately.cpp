class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i=0,j=0,c=0;
        string s;
        while (i<w1.size() && j<w2.size())
        {
            if (c==0) s+=w1[i],i+=1,c=1;
            else s+=w2[j],j+=1,c=0;
            
        }
        while (i<w1.size()) s+=w1[i],i+=1;
        while (j<w2.size()) s+=w2[j],j+=1;
        return s;
    }
};