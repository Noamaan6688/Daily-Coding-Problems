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
  ll a,b,c;cin>>a>>b>>c;
  c-=2;
  if (b<a-1||b>a*(a-1)/2||c<0)cout<<"NO\n";
  else if (c>=2) cout<<"YES\n";
  else if (c==1)
  {
   if (a*(a-1)/2==b)cout<<"YES\n";
   else cout<<"NO\n";
  }
  else
  {
   if(a==1)cout<<"YES\n";
   else cout<<"NO\n";
  }
 }
 
 return 0;
}
/*
5
1 0 3
4 5 3
4 6 3
5 4 1
2 1 1
 
*/