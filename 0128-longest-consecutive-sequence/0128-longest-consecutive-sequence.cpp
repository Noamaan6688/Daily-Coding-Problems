class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int c=1,c1=0;
        for(int i=1;i<n;i+=1)
        {
            if (nums[i]!=nums[i-1])
            {
                if(nums[i] == nums[i-1] + 1) c+=1;
                else c1=max(c1,c),c=1;
            }
        }
        return max(c1,c);
    }
};