class Solution {
public:
    int bitwiseComplement(int n) {
        int c=2,k=n;
        while (k>>1)
        {
            k>>=1;
            c<<=1;
        }
        return c-n-1;
    }
};