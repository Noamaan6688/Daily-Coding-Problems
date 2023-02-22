// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash  ios_base::sync_with_stdio(0); cin.tie(0);
#define ll long long 
#define MOD 1000000007
 
using namespace std;
 
int main()
{
 flash
 int r;cin>>r;while (r--)
 {
  ll k;cin>>k;
  ll b[k];
  f1(i,k) cin>>b[i];
  sort(b+1,b+k+1);
  bool t=true;
  f1(i,k)
  {
   if (b[i]>0)
   {
    k=i;
    // cout<<b[i]<<" "<<k<<"\n";
    break;
   }
  } 
  f1(i,k-1)
  {
   if (b[i+1]-b[i]<b[k])
   {
    t=false;
    // cout<<b[i]<<" "<<b[i+1]<<" "<<b[k]<<" "<<k<<"\n";
    break;
   }
  }
  if (t) cout<<k<<"\n";
  else cout<<k-1<<"\n";
 }
 
  return 0;
}
/*
6
4
-1 -2 0 0
7
-3 4 -2 0 -4 6 1
5
0 5 -3 2 -5
3
2 3 1
4
-3 0 2 0
6
-3 -2 -1 1 1 1
 
*/