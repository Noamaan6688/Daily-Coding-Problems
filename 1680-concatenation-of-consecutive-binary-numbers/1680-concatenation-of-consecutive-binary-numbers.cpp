class Solution {
public:
    int concatenatedBinary(int n) {
        long long int mod=1000000007,c=0,c1=0;
        for (int i=1;i<=n;i+=1)
        {
            if ((i&(i-1))==0) c1+=1;
            c=((c<<c1)+i)%mod;
        }
        return c;
    }
};