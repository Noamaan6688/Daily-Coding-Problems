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
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
int main()
{
  flash
  ll r;cin>>r;while (r--)
  {
    ll p,q,c=0,d=0,e=0,f=0,g=0;cin>>p>>q;
    vector<ll>v(q);
    f(i,q)cin>>v[i];
    sort(v.begin(),v.end());
    for (int i=q-1;i>=0;i-=1)
    {
      if (p-v[i]+c<=p)
      {
        d+=1;c+=p-v[i];
      }
      else break;
    }
    e=d;
    f=q-d;
    fn (i,q-d,q-1)
    {
      if (g>=v[i])
      {
        g+=p-v[f++];e-=1;
      }
      g+=p-v[i];
    }
    cout<<e<<"\n";
  }
 
  return 0;
}