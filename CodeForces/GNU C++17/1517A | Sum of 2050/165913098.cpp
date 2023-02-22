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
  ll k,c=0;cin>>k;
  if(k%2050)
  {
   cout<<"-1\n";
   continue;
  }
  k/=2050;
  while(k)
  {
   c+=k%10;
   k/=10;
  }
  cout<<c<<"\n";
 }
 
  return 0;
}
/*
6
205
2050
4100
20500
22550
25308639900
 
*/