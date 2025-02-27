class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        if (arr.size()<=2) return 0;
        int n=arr.size();
        unordered_map<int,int>mp;
        for (int i=0;i<n;i+=1) mp[arr[i]]=i;
        int maxi=0;
        for (int i=0;i<n;i+=1)
        {
            for (int j=i+1;j<n;j+=1)
            {
                int prev1=arr[j],prev2=arr[i],len=2;
                while (mp.find(prev1+prev2)!=mp.end()) 
                {
                    len+=1;
                    maxi=max(maxi,len);
                    int x=prev1;
                    prev1=prev1+prev2;
                    prev2=x;
                }
            }
        }
        if (maxi>2) return maxi;
        return 0;
    }
};