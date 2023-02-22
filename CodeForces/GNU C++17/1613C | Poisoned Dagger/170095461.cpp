// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long 
#define MOD 1000000007
 
using namespace std;
 
// bool fa(ll p,ll q,ll b[],ll mid)
// {
//  int c=0;
//  f1(i,p-1)
//  {
//   c+=b[i]-b[i-1];
//  }
//  if (c==q) return true;
//  return false;
// }
 
void solve()
{
  ll p,q;cin>>p>>q;
  ll b[p];
  f(i,p) cin>>b[i];
  ll low=1,high=1e18,c=0;
  while (low<=high)
  {
 ll mid=(high+low)/2;
 c=0;
 f(i,p)
 {
  if (i==(p-1)) c+=mid;
  else c+=min(mid,b[i+1]-b[i]);
 }
 if (c<q) low=mid+1;
 else high=mid-1;
  }
  cout<<high+1<<"\n";
 
  return;
}
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
  solve();
 }
 
  return 0;
}
/*
4
2 5
1 5
3 10
2 4 10
5 3
1 2 4 5 7
4 1000
3 25 64 1337
 
*/