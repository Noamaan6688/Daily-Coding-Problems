class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int>st;
        int sum=0;
        for(int i=0;i<nums.size();i+=1) st.insert(nums[i]);
        for (auto i:st)
        { 
            if (i>0) sum+=i;
        }
        if (sum==0) sum=*st.rbegin();
        return sum;
    }
};