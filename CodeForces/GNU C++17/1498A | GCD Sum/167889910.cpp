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
  ll n,s,k;cin>>n;
  for(ll i=n;i;i++)
  {
   s=0;k=i;
   while(k)
   {
    s+=k%10;
    k/=10;
   }
   if(__gcd(s,i)>1)
   {
    cout<<i<<"\n";
    break;
   }
  }
 } 
 
  return 0;
}
/*
3
11
31
75
 
*/