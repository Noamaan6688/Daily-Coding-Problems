class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int c=0,n=nums.size();
        for (auto i:nums) c+=i;
        n=n*(n+1)/2;
        return n-c;
    }
};