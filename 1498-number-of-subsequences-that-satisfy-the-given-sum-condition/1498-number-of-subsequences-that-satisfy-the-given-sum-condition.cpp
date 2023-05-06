class Solution {
public:
    int numSubseq(vector<int>& nums, int ta) {
        sort(nums.begin(),nums.end());
        long long int c=0,i=0,j=nums.size()-1,mod=1e9+7;
        while (i<=j)
        {
            if (nums[i]+nums[j]>ta) j-=1;
            else
            {
                long long int c1=1,c2=j-i,c3=2;
                while (c2)
                {
                    if (c2%2)
                    {
                        c1*=c3;
                        c1%=mod;
                    }
                    c3*=c3;
                    c1%=mod;
                    c3%=mod;
                    c2/=2;
                }
                c+=c1;
                c%=mod;
                i+=1;
            }
        }
        return c;
    }
};