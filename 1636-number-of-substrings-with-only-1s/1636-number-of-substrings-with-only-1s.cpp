class Solution {
public:
    int numSub(string s) {
        long long ans = 0, count = 0;
        long long mod = 1000000007;
        for (int i=0;i<s.size();i+=1)
        {
            if (s[i]=='0')
            {
                ans+=(((count*(count+1))%mod)/2)%mod;
                // cout<<i<<" "<<ans<<" \n";
                count=0;
            }
            else count+=1;
        }
        // cout<<count<<" "<<ans<<" \n";
        ans+=(((count*(count+1))%mod)/2)%mod;
        return (int)ans;
    }
};