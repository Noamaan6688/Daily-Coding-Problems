class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> st;
        for(int x : nums){
            while(!st.empty()){
                int g = gcd(x, st.back());
                if(g == 1){
                    break;
                }
                x = st.back() / g * x;
                st.pop_back();
            }
            st.push_back(x);
        }
        return st;
    }
};