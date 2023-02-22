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
  ll k,s,i,c=0,d=0;cin>>k;
  ll b[k];
  f(i,k) cin>>b[i];
  f(i,k)
  {
   if(b[i]==0) c++;
   if(b[i]==1) d++;
  }
  s=pow(2,c);
  s*=d;
  cout<<s<<"\n";
 }
 
 return 0;
}
/*
5
5
1 2 3 4 5
2
1000 1000
2
1 0
5
3 0 2 1 1
5
2 1 0 3 0
 
*/