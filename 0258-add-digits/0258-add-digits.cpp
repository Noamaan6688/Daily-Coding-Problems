class Solution {
public:
    int addDigits(int num) {
        int c=0;
        while (num)
        {
            c+=(num%10);
            num/=10;
        }
        if(c<10) return c;
        else return addDigits(c);
    }
};