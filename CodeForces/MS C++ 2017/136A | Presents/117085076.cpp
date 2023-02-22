// Hi
#include <iostream>
#include <vector>
#include <algorithm>
#define f(i,n) for(int i=0;i<n;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define fn(i,j,k) for(int i=j;i<=k;i++)
#define ll long long int
 
using namespace std;
int main()
{
    int r;cin>>r;
    vector<int>v;
    f(i,r)
    {
        int k;cin>>k;
        v.push_back(k);
    }
    vector<int>b;
    f(i,r)
    {
        vector<int>::iterator j= find(v.begin(),v.end(),i+1);
        b.push_back(j-v.begin()+1);
    }
    f(i,r) cout<<b[i]<<" ";
    cout<<endl;
 
 return 0;   
}