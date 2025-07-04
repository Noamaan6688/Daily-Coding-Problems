class Solution {
public:
    static int maxDifference(string& s) {
        int freq[26]={0};
        for(char c: s)
            freq[c-'a']++;
        int maxOdd=0, minEven=100;
        for(int f: freq){
            if (f==0) continue;
            if (f&1) maxOdd=max(f, maxOdd);
            if ((f&1)==0) minEven=min(f, minEven);
        }
        return maxOdd-minEven;
    }
};