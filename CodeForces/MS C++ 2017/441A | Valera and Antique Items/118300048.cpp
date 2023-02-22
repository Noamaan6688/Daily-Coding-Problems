// Hi
#include <iostream>
#include <vector>
#include <algorithm>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define ll long long int
 
using namespace std;
 
int main()
{
    ll p,q,c=0;cin>>p>>q;
    vector<ll>v;
    f(i,p)
    {
        ll r,t=0;cin>>r;
        f(j,r)
        {
            ll s;cin>>s;
            if (s<q && t==0)
            {
                v.push_back(i+1);
                c+=1;
                t+=1;
            }
        }
    }
    cout<<c<<endl;
    f(i,c) cout<<v[i]<<" ";
 
  return 0;
}