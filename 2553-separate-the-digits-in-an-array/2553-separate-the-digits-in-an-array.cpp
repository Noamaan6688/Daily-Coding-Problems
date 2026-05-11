class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for (int i=0;i<nums.size();i+=1)
        {
            int n=nums[i];
            vector<int>v;
            while (n>0)
            {
                int r=n%10;
                v.push_back(r);
                n/=10;
            }
            for (int i=v.size()-1;i>=0;i-=1) ans.push_back(v[i]);
        }
        return ans;
    }
};