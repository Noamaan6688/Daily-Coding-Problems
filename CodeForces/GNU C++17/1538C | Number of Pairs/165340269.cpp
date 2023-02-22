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
  ll k,p,q;cin>>k>>p>>q;
  ll a[k];
  f(i,k) cin>>a[i];
  sort(a,a+k);
  ll s=0;
  f(i,k-1)
  {
   ll s1=p-a[i],s2=q-a[i];
   ll k1=lower_bound(a+i+1,a+k,s1)-a;
   ll k2=upper_bound(a+i+1,a+k,s2)-a;
   s+=(k2-k1);
  }
  cout<<s<<"\n";
 }
 
  return 0;
}
/*
4
3 4 7
5 1 2
5 5 8
5 1 2 4 3
4 100 1000
1 1 1 1
5 9 13
2 5 5 1 1
 
*/