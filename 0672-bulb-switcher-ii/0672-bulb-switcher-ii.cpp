class Solution {
public:
    int flipLights(int n, int pr) {
        if (pr==0) return 1;
        if (n==1) return 2;
        if (pr==1)
        {
            if (n>2) return 4;
            return 3;
        }
        if (n==2) return 4;
        if (pr==2) return 7;
        return 8;
    }
};