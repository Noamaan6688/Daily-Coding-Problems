class Solution {
public:
    int minimumRecolors(std::string blocks, int k) {
        int n=blocks.length();
        int ans=INT_MAX;
        
        for (int i=0;i<=n-k;i+=1) 
        {
            int c=0;
            for (int j=i;j<i+k;j+=1) 
            {
                if (blocks[j]=='W') c+=1;
            }
            ans=min(ans,c);
        }
        return ans;   
    }
};