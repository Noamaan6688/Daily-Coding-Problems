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
 ll k,a=0;cin>>k;
 char c;cin>>c;
 string s;cin>>s;
 ll c1=0,c2=-1e9;
 f(i,k)
 {
  if (s[i]=='g')
  {
   c1=i;break;
  }
 }
 ll c3=c1;
 for (int i=k-1;i>=0;i-=1)
 {
  if (s[i]=='g') c3=i;
  if (s[i]==c)
  {
   if (c3<i)
   {
    a=max(a,k-i+c1);
   }
   else
   {
    a=max(a,c3-i);
   }
  }
 }
 cout<<a<<"\n";
 
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
6
5 r
rggry
1 g
g
3 r
rrg
5 y
yrrgy
7 r
rgrgyrg
9 y
rrrgyyygy
 
*/