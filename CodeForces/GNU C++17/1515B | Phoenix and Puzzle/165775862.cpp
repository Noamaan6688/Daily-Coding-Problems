// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long 
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
  ll k;cin>>k;
  ll c1=sqrt(k/2),c2=sqrt(k/4);
  c1*=c1*2;c2*=c2*4;
  if (c1==k || c2==k) cout<<"YES\n";
  else cout<<"NO\n";
 }
 
  return 0;
}
/*
3
2
4
6
 
*/