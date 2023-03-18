class Solution {
public:
    int concatenatedBinary(int n) {
        int c1=1;
        long long int mod=1000000007,c=0;
        for (int i=0;i<=n;i+=1)
        {
            if (i==c1) c1*=2;
            c=(c*c1+i)%mod;
        }
        return c;
    }
};