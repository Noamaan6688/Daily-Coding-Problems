// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
void solve()
{
 ll p,q,c=0;cin>>p>>q;
 vector<ll>v1(p+1,0),v2(p+1,0);
 f1(i,p)
 {
  ll n;cin>>n;
  v1[i]=max(v1[i-1],n);
  v2[i]=v2[i-1]+n;
 }
 while (q--)
 {
  ll n;cin>>n;
  cout<<v2[upper_bound(v1.begin(),v1.end(),n)-v1.begin()-1]<<" ";
 }
 cout<<"\n";
 
 
 return ;
}
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
  solve();
 }
 
  return 0;
}
/*
3
4 5
1 2 1 5
1 2 4 9 10
2 2
1 1
0 1
3 1
1000000000 1000000000 1000000000
1000000000
 
*/