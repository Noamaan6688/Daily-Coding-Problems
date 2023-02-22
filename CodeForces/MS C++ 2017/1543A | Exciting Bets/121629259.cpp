// Hi
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <algorithm>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
// #define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int gcf(ll x,ll y)
{
    while (x!=y)
    {
        if (x>y) x-=y;
        else y-=x;
    }
    return x;
}
 
int main()
{
    ll r;cin>>r;while (r--)
    {
        ll m,n,p,q;cin>>m>>n;
        if (m==n)
        {
            cout<<0<<" "<<0<<"\n";
        }
        else
        {
            ll x=max(m,n),y=min(m,n);
            p=x-y;
            if (y%p==0) q=0;
            else q=min(p-y%p,y%p);
            cout<<p<<" "<<q<<"\n";
        }
    }
 
  return 0;
}