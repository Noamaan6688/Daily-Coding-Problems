class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n=colors.size(),c=1,ans=0;
        for(int i=0;i<n+k-2;i+=1)
        {
            if (colors[i%n]!=colors[(i+1)%n]) c+=1;
            else c=1;
            ans+=(c>=k);
        }
    return ans;
    }
};