class Solution {
public:
    int minAbsDifference(vector<int>& nums, int goal) {
        int n=nums.size(),n1=n>>1; 
        vector<int>v1,v2;
        int n2=1<<n1;
        for(int i=0;i<n2;i+=1)
        {
            int s=0;
            for (int j=0;j<n1;j+=1)
            {
                if(i>>j&1) s+=nums[j];
            }
            v1.push_back(s);
        }
        n2=(1<<(n-n1));
        for(int i=0;i<n2;i+=1)
        {
            int s=0;
            for(int j=n1;j<n;j+=1)
            {
                if(i>>(j-n1)&1) s+=nums[j];
            }
            v2.push_back(s);
        }
        sort(v2.begin(),v2.end());
        int c=1e9;
        for(int i:v1)
        {
            int c1=goal-i;
            int j=lower_bound(v2.begin(),v2.end(),c1)-v2.begin();
            if(j) c=min(c,abs(v2[j-1]-c1));
            if(j<v2.size()) c=min(c,abs(v2[j]-c1));
            if(c==0) return 0;
        }
        return c;
    }
};