class Solution {
public:
bool check(long long &mid, vector<int>& nums, int &k){
    int c=0;
    for(int i=0;i<nums.size();i+=1)
    {
        if(nums[i]<=mid) c+=1,i+=1;
        if (c>=k) return true;
    }
    return false;
}
    int minCapability(vector<int>& nums, int k) {
        long long left=*min_element(nums.begin(),nums.end()); 
        long long right=*max_element(nums.begin(),nums.end());
     
        while (left<right)
        {
            long long mid=left +(right-left)/2;
            if(check(mid,nums,k)) right=mid;
            else left=mid+1;
        }
        return left;
    }
};