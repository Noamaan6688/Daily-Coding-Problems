// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
// void recur()
// {
 
// }
 
void solve()
{
  int k,c=0,c1=1000,c2=0;cin>>k;
  int b[k];
  f(i,k) cin>>b[i];
  c=b[k-1]-b[0];
  f(i,k) c2=max(c2,b[i]),c1=min(c1,b[i]);
  f(i,k-1) c=max(c,b[i]-b[i+1]);
  // c=max(c,b[0]-b[1]);
  cout<<max({c,b[k-1]-c1,c2-b[0]})<<"\n";
 
  return;
}
 
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    solve();
  }
 
  return 0;
}
/*
5
6
1 3 9 11 5 7
1
20
3
9 99 999
4
2 1 8 1
3
2 1 5
 
*/