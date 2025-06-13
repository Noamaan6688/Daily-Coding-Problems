class Solution {
public:
    vector<int> dp;
    int n;
    vector<int> arr;
    int rec(int i,int j,vector<int> &arr){
        if(i >= n) return 0;
        if(dp[i]!=-1) return dp[i];
        int ans=rec(i+1,j,arr);
        if(arr[i]-arr[i-1]<=j) ans=max(ans,1+rec(i+2,j,arr));
        return dp[i] = ans;
    }

    int minimizeMax(vector<int>& nums, int p) {
        long long lo=0,hi=(int)1e9,ans;
        sort(nums.begin(),nums.end());
        n=nums.size();
        while(lo<=hi){
            long long mid=(lo+hi)>>1;
            dp.assign(n,-1);
            
            if(rec(1,mid,nums)>=p){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};