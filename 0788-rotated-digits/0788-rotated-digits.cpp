class Solution {
public:
    bool isGood(int n) {
        int f = false, s = false;
        while(n > 0) {
            int ld = n % 10;
            if(ld == 3 || ld == 4 || ld == 7) f = true; // these don't give a valid digit after rotating so if these exists (f becomes true) we returb false
            if(ld == 2 || ld == 5 || ld == 6 || ld == 9) s = true; // these rotate and give a valid digit so if atleast any one exists it can give us a different number so we return true if s is true only when f is false
            n /= 10;
        }
        if(f) return false;
        else if(s) return true;
        return false;
    }
    int rotatedDigits(int n) {
        int ans = 0;
        for(int i=1;i<=n;i++) {
            if(isGood(i)) ans++;
        }
        return ans;
    }
};