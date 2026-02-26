class Solution {
public:
    int numSteps(string s) {
        int result=0; 
        while(s.length()!=1){
            if(s[s.length()-1]=='1'){ 
                int n = s.size() - 1;
                int car = 1;
                for (int i = n; i >= 0; --i) {
                    int bit = (s[i] - '0') + car;   
                    s[i] = char('0' + (bit & 1));   
                    car = (bit >> 1);               
                    if (car == 0) break;
                }
                if (car == 1) s.insert(s.begin(), '1');
            }
            else{
                s.erase(s.length()-1,1);
            }
            result++;
        }
        return result;
    }
};