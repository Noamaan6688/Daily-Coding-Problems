class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n<=0) return 0;
        
        return 3486784401%n==0;
    }
};