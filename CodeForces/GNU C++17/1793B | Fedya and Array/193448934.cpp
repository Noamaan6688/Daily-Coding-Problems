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
 ll p,q;cin>>p>>q;
 cout<<(2*p)-(2*q)<<"\n";
 for (ll i=p;i>q;i-=1) cout<<i<<" ";
 for (ll i=q;i<p;i+=1) cout<<i<<" ";cout<<"\n";
 
 return;
}
 
int main()
{
 maan
 int r;cin>>r;while (r--)
 {
  solve();
 }
 
  return 0;
}
/*
4
3 -2
4 -4
2 -1
5 -3
 
*/