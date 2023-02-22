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
  ll p,q;cin>>p>>q;
  p-=1;
  bool t=true;
  f(i,p)
  {
   ll c;cin>>c;
   if(c%q!= 0) t=false;
  }
  if (t) cout<<"YES\n";
  else cout<<"NO\n";
 } 
 
  return 0;
}
/*
4
2
5 10
3
1 2 3
4
1 1 1 1
9
9 9 8 2 4 4 3 5 3
 
*/