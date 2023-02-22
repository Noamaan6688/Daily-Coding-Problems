// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long 
#define MOD 1000000007
 
using namespace std;
 
ll fa(ll m)
{
 ll c=0;
 for (ll i=2;(i*i*i)<=m;i++) c+=m/(i*i*i);
 return c;
}
 
void solve()
{
 ll k,c=-1;cin>>k;
 ll l=0,h=1e18;
 while (l<h)
 {
  ll m=(h+l)/2;
  if (fa(m)<k) l=m+1;
  else h=m;
 }
 if (fa(l)==k) c=l;
 cout<<c<<"\n";
 
  return;
}
 
int main()
{
 flash
 // int r;cin>>r;while (r--)
 {
  solve();
 }
 
  return 0;
}
/*
8
 
54
*/