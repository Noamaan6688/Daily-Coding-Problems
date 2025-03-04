class Solution {
public:
    bool checkPowersOfThree(int n) {
        while (n>0) 
        {
            int i=n%3;
            if (i==2) return false;
            n/=3;
        }
        return true;
    }
};