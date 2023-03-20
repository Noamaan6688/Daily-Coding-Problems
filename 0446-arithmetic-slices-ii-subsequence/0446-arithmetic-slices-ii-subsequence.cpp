class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        long long int c=0;
        vector<unordered_map<long long int,long long int>>mp(n+1);
        for (int i=0;i<n;i+=1)
        {
            for (int j=i-1;j>=0;j-=1)
            {
                long long int c1=(long)nums[i]-(long)(nums[j]);
                c+=mp[j][c1];
                mp[i][c1]+=mp[j][c1]+1;
            }
        }
        return c;
    }
};