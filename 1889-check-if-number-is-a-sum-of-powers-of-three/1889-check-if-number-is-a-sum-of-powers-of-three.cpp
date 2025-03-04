class Solution {
public:
    bool checkPowersOfThree(int n) {
        int i=1;
        while (i*3<=n) i*=3;
        while (n > 0 && i>0) 
        {
            if (n>=i) n-=i;
            i/=3; 
        }
        return n==0;
    }
};