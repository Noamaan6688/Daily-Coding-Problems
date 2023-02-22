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
 ll s,s1=0,s2=0,i=1;cin>>s;
 while (s>0)
 {
  int c=s%10;
  int a=c/2,b=0;
  b=c-a;
  if (a>b)
  {
   if (s1>s2) s2+=i*a,s1+=i*b;
   else s1+=i*a,s2+=i*b;
  }
  else
  {
   if (s1>s2) s2+=i*b,s1+=i*a;
   else s1+=i*b,s2+=i*a;
  }
  i*=10;
  s/=10;
 }
 cout<<s1<<" "<<s2<<"\n";
 
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
161
67
1206
19
 
*/