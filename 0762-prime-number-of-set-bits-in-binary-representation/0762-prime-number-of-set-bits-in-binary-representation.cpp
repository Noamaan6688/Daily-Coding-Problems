class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int cntPrimeSetBits = 0;
        int magicMask = 665772; 

        for (int num = left; num <= right; num++) {
            if ((magicMask >> __builtin_popcount(num)) & 1) {
                cntPrimeSetBits++;
            }
        }
        return cntPrimeSetBits;
    }
};