class Solution {
public:
    int bulbSwitch(int n) {
        long long int i=1,j=n,c=0;
        while (i<=j)
        {
            long long int m=(i+j)/2;
            if (m*m==n) return m;
            if (m*m<n) i=m+1;
            else j=m-1;
        }
        return sqrt(n);
    }
};