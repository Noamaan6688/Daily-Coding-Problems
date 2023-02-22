// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    ll a,b,c,d,s=0,t=0;cin>>a>>b>>c>>d;
    f(i,a)
    {
      if ((t+c)>b)
      {
        s+=t-d;t-=d;
      }
      else
      {
        s+=t+c;t+=c;
      }
      // cout<<s<<" "<<t<<"\n";
    }
    cout<<s<<"\n";
  }
 
  return 0;
}
/*
3
5 100 1 30
7 1000000000 1000000000 1000000000
4 1 7 3
 
*/