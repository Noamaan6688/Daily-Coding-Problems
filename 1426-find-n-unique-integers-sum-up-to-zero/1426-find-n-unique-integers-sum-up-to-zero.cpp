class Solution {
public:
    vector<int> sumZero(int n) {
        int k=n/2,j=0;
        vector<int>v(n,-1);
        for (int i=-k;i<0;i+=1) v[j++]=i;
        if (n%2!=0) v[j++]=0;
        for (int i=1;i<=k;i+=1) v[j++]=i;
        return v;
    }
};