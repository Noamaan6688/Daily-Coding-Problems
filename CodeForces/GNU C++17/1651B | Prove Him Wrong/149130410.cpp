// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
// int p(int x,int y)
// {
//   int q=1;
//   while (y>0)
//   {
//     if (y%2==0)
//     {
//       x*=x;
//       y/=2;
//     }
//     else
//     {
//       q*=x;
//       y-=1;
//     }
//   }
//   return q;
// }
 
int main()
{
  flash
  ll r;cin>>r;while (r--)
  {
    ll k,c=1;cin>>k;
    if (k>19) cout<<"NO\n";
    else
    {
      vector<ll>v(k);
      f(i,k)
      {
        v[i]=(c);
        c*=3;
      }
      cout<<"YES\n";
      f(i,v.size()) cout<<v[i]<<" ";cout<<"\n";
    }
  }
 
  return 0;
}
/*
3
2
512
3
 
*/