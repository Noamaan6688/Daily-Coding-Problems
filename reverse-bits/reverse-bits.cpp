class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t c=0;
        int d=0;
        while (n>0)
        {
            c+=(n%2)<<(31-d);
            n>>=1;
            d+=1;
        }
        return c;
    }
};