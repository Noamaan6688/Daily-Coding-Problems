class Solution {
public:
    int countPrimes(int n) {
        vector<bool>v(n,true);
        for (long long int i=2;i<n;i+=1)
        {
            for (long long int j=i*i;j<n;j+=i) v[j]=0;
        }
        long long int c=0;
        for (int i=2;i<n;i+=1) if (v[i]) c+=1;
        return c;
    }
};