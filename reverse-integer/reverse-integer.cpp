class Solution {
public:
    int reverse(int x) {
        long long c=0;
        int t=0;
        if (x<0) t=1,x=abs(x);
        while (x>0)
        {
            c=(c*10)+(x%10);
            x/=10;
        }
        if (t==1) c=-c;
        if (c>INT_MAX || c<INT_MIN) return 0;
        return c;
    }
};