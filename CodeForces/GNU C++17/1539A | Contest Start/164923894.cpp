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
 ll a,b,c,d=0;
 cin>>a>>b>>c;
 ll e=c/b;
 if(e<a) d=e*(a-e)+((e-1)*e)/2;
 else d=(a*(a-1))/2;
 cout<<d<<"\n";
  }
 
  return 0;
}
/*
4
4 2 5
3 1 2
3 3 10
2000000000 1 2000000000
 
*/
 
 