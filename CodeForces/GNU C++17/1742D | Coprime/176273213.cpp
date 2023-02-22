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
 ll k,c=-1;cin>>k;
 unordered_map<int,int>mp;
 f1(i,k)
 {
  int n;cin>>n;
  mp[n]=i;
 }
 for (auto [i1,i2]:mp)
 {
  for (auto [j1,j2]:mp)
  {
   if (__gcd(i1,j1)==1)
   {
    ll d=i2+j2;
    c=max(c,d);
   }
  }
 }
 cout<<c<<"\n";
 
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
6
3
3 2 1
7
1 3 5 2 4 7 7
5
1 2 3 4 5
3
2 2 4
6
5 4 3 15 12 16
5
1 2 2 3 6
 
*/