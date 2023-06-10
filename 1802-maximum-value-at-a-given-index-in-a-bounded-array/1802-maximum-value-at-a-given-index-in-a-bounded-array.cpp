class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        if (n==1) return maxSum;
        int l=index,r=index; 
        int ans=1,k=n,cnt=r-l+1;
        while (k+cnt<=maxSum)
        {
            if (l!=0 || r!=n-1)
            {
                k+=cnt;
                if (l>=1) l-=1;
                if (r<n-1) r+=1;
                cnt=r-l+1;
                ans+=1;
            }
            else break;
        }
        ans+=(maxSum-k)/n;
        return ans;
    }
};