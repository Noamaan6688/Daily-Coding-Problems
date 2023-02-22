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
    ll k,d=INT_MAX,e=0,f=INT_MAX,g=INT_MAX,c1=INT_MAX;cin>>k;
  while(k--)
  {
      ll a,b,c;cin>>a>>b>>c;
   if(a<d) d=a,g=c,c1=INT_MAX;
   if(a==d) g=min(g,c);
   if(b>e) e=b,f=c,c1=INT_MAX;
   if(b==e) f=min(f,c);
   c1=min(f+g,c1);
   if(d==a && e==b) c1=min(c1,c);
   cout<<c1<<"\n";
    }  
  }
 
  return 0;
}
/*
3
2
2 4 20
7 8 22
2
5 11 42
5 11 42
6
1 4 4
5 8 9
7 8 7
2 10 252
1 11 271
1 10 1
 
*/