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
  ll p,q,c=0,s=1;cin>>p>>q;
  while (q>0)
  {
   if(q%2==1) c=(c+s)%MOD;
   s=(s*p)%MOD;
   q/=2;
  }
  cout<<c%MOD<<"\n";
 }
 
 return 0;
}
/*
3
3 4
2 12
105 564
 
*/