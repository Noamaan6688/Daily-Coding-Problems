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
  if (p==q) cout<<p/2<<"\n";
  else cout<<min((p+q)/4,min(p,q))<<"\n";
 }
 
 return 0;
}
/*
6
5 5
10 1
2 3
0 0
17 2
1000000000 1000000000
 
*/