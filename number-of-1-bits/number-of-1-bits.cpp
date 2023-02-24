class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0;
        while (n>0)
        {
            if (n&1) c+=1;
            n=n>>1;
            // cout<<n%10<<" "<<c<<" "<<n<<"\n";
        }
        return c;
    }
};