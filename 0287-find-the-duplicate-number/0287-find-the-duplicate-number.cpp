class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int c=0,i=0,j=nums.size()-1;
        // sort(nums.begin(),nums.end());
        while (i<=j)
        {
            int m=(i+j)/2;
            c=0;
            for (auto i:nums)
            {
                if (i<=m) c+=1;
            }
            if (c<=m) i=m+1;
            else j=m-1;
        }
        return i;
    }
};