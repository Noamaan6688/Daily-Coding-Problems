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
  ll a,b,c,d,e=0;cin>>a>>b>>c>>d;
  ll p[a];
  f(i,a) cin>>p[i];
  sort(p,p+a);
  f(i,a)
  {
   if ((p[i]>=b) && (p[i]<=c) && (d>=p[i]))
   {
    e+=1;d-=p[i];
   }
  }
  cout<<e<<"\n";
 }
 
 return 0;
}
/*
8
3 1 100 100
50 100 50
6 3 5 10
1 2 3 4 5 6
6 3 5 21
1 2 3 4 5 6
10 50 69 100
20 30 40 77 1 1 12 4 70 10000
3 50 80 30
20 60 70
10 2 7 100
2 2 2 2 2 7 7 7 7 7
4 1000000000 1000000000 1000000000
1000000000 1000000000 1000000000 1000000000
1 1 1 1
1
 
*/