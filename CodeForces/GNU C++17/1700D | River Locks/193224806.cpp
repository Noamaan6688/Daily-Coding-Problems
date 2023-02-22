// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define maan  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
void solve()
{
 ll k,c=0,s=0;cin>>k;
 ll b[k+1];
 f1(i,k) cin>>b[i];
 f1(i,k)
 {
  s+=b[i];
  c=max(c,(s+i-1)/i);
 }
 ll q;cin>>q;
 while (q--)
 {
  ll x;cin>>x;
  if (x<c) cout<<"-1\n";
  else cout<<(s+x-1)/x<<"\n";
 }
 
 return;
}
 
int main()
{
 maan
 // int r;cin>>r;while (r--)
 {
  solve();
 } 
 
  return 0;
}
/*
5
4 4 4 4 4
6
1
3
6
5
2
4
 
*/