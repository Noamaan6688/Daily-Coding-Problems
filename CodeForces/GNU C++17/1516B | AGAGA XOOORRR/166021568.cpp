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
  ll k,c=0,d=0;cin>>k;
  ll b[k];
  f(i,k) 
  {
   cin>>b[i];
   c=c^b[i];
  }
  if(c==0) cout<<"YES\n";
  else 
  {
   d=0;
   ll e=0;
   f(i,k) 
   {
    d=d^b[i];
    if(d==c)
    {
     d=0;
     e+=1;
    }
   }
   if(d==0 && e>1) cout<<"YES\n";
   else cout<<"NO\n";
  }
 }
 
  return 0;
}
/*
2
3
0 2 2
4
2 3 1 10
 
*/