class Solution {
public:
    int arraySign(vector<int>&nums) {
        int c=0;
        for (int i=0;i<nums.size();i+=1)
        {
            if (nums[i]==0) return 0;
            if (nums[i]<0) c+=1;
        }
        if (c%2) return -1;
        return 1;
    }
};