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
 ll k;cin>>k;
 if (k%2==0) cout<<"No\n";
 else
 {
  cout<<"Yes\n";
  ll c1=1,c2=2*k;
  while (c1<=k/2+1)
  {
   cout<<c1<<" "<<c2<<"\n";
   c1+=1;c2-=2;
  }
  c2=2*k-1;
  while (c1<=k)
  {
   cout<<c1<<" "<<c2<<"\n";
   c1+=1;c2-=2;
  }
 }
 
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
1
2
3
4
5
 
*/