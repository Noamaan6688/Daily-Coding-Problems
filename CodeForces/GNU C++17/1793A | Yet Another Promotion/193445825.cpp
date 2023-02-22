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
 ll a,b,c,d;cin>>a>>b>>c>>d;
 if (c>d)
 {
  cout<<min(b*c,((c/(d+1))*d*a)+((c%(d+1))*min(a,b)))<<"\n";
 }
 // else if (c==d) cout<<min(a*d,b*c)<<"\n";
 else cout<<c*min(a,b)<<"\n";
 
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
5
5 4
3 1
5 4
3 2
3 4
3 5
20 15
10 2
1000000000 900000000
1000000000 8
 
*/