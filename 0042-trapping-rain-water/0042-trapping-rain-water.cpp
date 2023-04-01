class Solution {
public:
    int trap(vector<int>& he) {
        int c=0,n=he.size();
        vector<int>v1(n),v2(n);
        v1[0]=he[0];
        v2[n-1]=he[n-1];
        for (int i=1;i<n;i+=1) v1[i]=max(v1[i-1],he[i]);
        for (int i=n-2;i>=0;i-=1) v2[i]=max(v2[i+1],he[i]);
        for (int i=0;i<n;i+=1) c+=min(v1[i],v2[i])-he[i];
        return c;
    }
};