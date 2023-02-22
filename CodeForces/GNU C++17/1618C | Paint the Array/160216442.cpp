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
 int r;cin >> r;
 while (r--)
 {
  ll k,c=0,d=0;cin>>k;
  ll b[k];
  f(i,k)
  {
   cin>>b[i];
   if (i%2==1) d=__gcd(d,b[i]);
   else c=__gcd(c,b[i]);
  }
  for (int i=1;i<k;i+=2)
  {
   if ((b[i]%c)==0)
   {
    c=0;break;
   }
  } 
  for (int i=0;i<k;i+=2)
  {
   if ((b[i]%d)==0)
   {
    d=0;break;
   }
  }
  if (c>0) cout<<c<<"\n";
  else if (d>0) cout<<d<<"\n";
  else cout<<"0\n";
 }
 
 return 0;
}
/*
5
5
1 2 3 4 5
3
10 5 15
3
100 10 200
10
9 8 2 6 6 2 8 6 5 4
2
1 3
 
*/