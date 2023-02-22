// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
void solve()
{
  int k,s=0,i=0;cin>>k;
  int b[7];
  f(i,7) cin>>b[i];
  while (k>b[i])
  {
    k-=b[i];
    i=(i+1)%7;
  }
  cout<<i+1<<"\n";
 
  return;
}
 
 
int main()
{
  flash
  // int r;cin>>r;while (r--)
  {
    solve();
  }
 
  return 0;
}
/*
100
15 20 20 15 10 30 45
 
*/