// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
 
using namespace std;
 
bool x(int k)
{
  if (k==0) return false;
  return (ceil(log2(k))==floor(log2(k)));
}
 
int main()
{
  flash
  ll r;cin>>r;while (r--)
  {
    ll k;cin>>k;
    if (x(k)==true)
    {
      for (ll i=k-1;i>=k/2;i-=1) cout<<i<<" ";
      cout<<"0 ";
      f1(i,k/2-1) cout<<i<<" ";cout<<"\n";
    }
    else
    {
      while (x(k)==false)
      {
        k-=1;
        cout<<k<<" ";
      }
      f(i,k) cout<<i<<" ";cout<<"\n";
    }
  }
 
  return 0;
}
/*
4
2
3
5
10
 
*/