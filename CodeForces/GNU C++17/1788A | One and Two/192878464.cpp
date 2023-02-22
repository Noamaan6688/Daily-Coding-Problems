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
 int k,c=0;cin>>k;
 int b[k];
 f(i,k)
 {
  cin>>b[i];
  if (b[i]==2) c+=1;
 }
 if (c%2) cout<<"-1\n";
 else
 {
  int d=0;
  f(i,k)
  {
   if (b[i]==2) d+=1;
   if (d==c/2)
   {
    cout<<i+1<<"\n";
    break;
   }
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
3
6
2 2 1 2 1 2
3
1 2 1
4
1 1 1 1
 
*/