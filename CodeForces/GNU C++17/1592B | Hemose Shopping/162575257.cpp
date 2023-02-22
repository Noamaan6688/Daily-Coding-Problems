// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
  ll p,q;cin>>p>>q;
  ll b1[p],b2[p];
  bool t=true;
  f(i,p)
  {
   cin>>b1[i];
   b2[i] = b1[i];
  }
  sort(b1,b1+p);
  fn(i,p-q,q-1) if(b2[i]!= b1[i]) t=false;
  if (t) cout<<"YES\n";
  else cout<<"NO\n";
 }
 
 return 0;
}
/*
4
3 3
3 2 1
4 3
1 2 3 4
5 2
5 1 2 3 4
5 4
1 2 3 4 4
 
*/