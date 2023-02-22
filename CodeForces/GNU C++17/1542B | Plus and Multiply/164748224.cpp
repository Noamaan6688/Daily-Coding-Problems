// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
 ll a,b,c,s=1;cin>>a>>b>>c;
 bool t=false;
 while (s<=a) 
 {
  if ((a-s)%c==0) t=true;
  if (b==1) break;
  s*=b;
 }
 if (t) cout<<"Yes\n";
 else cout<<"No\n";
  }
 
  return 0;
}
/*
5
24 3 5
10 3 6
2345 1 4
19260817 394 485
19260817 233 264
 
*/
 
 