class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(auto i:nums) st.insert(i);
        int c=0;
        for(auto i:nums)
        {
            if(st.find(i-1)==st.end())
            {
                int c1=1,c2=i;
                while(st.find(c2+1)!=st.end()) c1+=1,c2+=1;
                c=max(c,c1);
            }
        }
        return c;
    }
};