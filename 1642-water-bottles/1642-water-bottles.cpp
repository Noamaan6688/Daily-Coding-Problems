class Solution {
public:
    int numWaterBottles(int n, int ex) {
        if(ex>n) return n ; 
        int empty = 0 ;
        int consumedBottles  = 0 ;
        while(n){
            consumedBottles  += n;
            empty += n;
            n = empty/ex ;
            empty = empty%ex ;
        }
        return consumedBottles ;
    }
};