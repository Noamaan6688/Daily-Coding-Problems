class Solution {
public:
#define ll long long
vector<ll>pows;
int f(int index,ll k,vector<int>& operations)
{
    if(index<0) return 0;
    if(index>=55) return f(index-1,k,operations);
    if(pows[index]<k) return operations[index] +f(index-1,k-pows[index],operations); 
    
    return f(index-1,k,operations);
}
char kthCharacter(long long k, vector<int>& operations) {

        pows.resize(55,1);
        pows[0]=1;
        for(int i=1;i<55;i++) pows[i]*=2*pows[i-1];
        int n=operations.size();
        int ans=f(n-1,k,operations);
        return 'a'+ans%26;
    }
};