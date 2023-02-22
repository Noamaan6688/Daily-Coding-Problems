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
 ll k,c=0;cin>>k;
 vector<ll>v(k+1,0);
 f1(i,k)
 {
  ll d;cin>>d;
  if (d<(i))
  {
   if (d>0) c+=v[d-1];
   v[i]+=1;
  }
  v[i]+=v[i-1];
 }
 cout<<c<<"\n";
 
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
8
1 1 2 3 8 2 1 4
2
1 2
10
0 2 1 6 3 4 1 2 8 3
2
1 1000000000
3
0 1000000000 2
 
*/