// Hi
#include <bits/stdc++.h>
#define f(i, n) for (int i = 0; i < n; i++)
#define f1(i, n) for (int i = 1; i <= n; i++)
#define fn(i, j, k) for (int i = j; i <= k; i++)
#define maan  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
void solve()
{
  ll p,q,c=0;cin>>p>>q;
  ll b[p];
  f(i,p) cin>>b[i];
  if (q!=1)
  {
    fn(i,1,p-2) if (b[i]>(b[i-1]+b[i+1])) c+=1;
  }
  else
  {
    if (p%2) c=p/2;
    else c=p/2-1;
  }
  cout<<c<<"\n";
 
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
5 2
2 9 2 4 1
4 4
1 3 2 1
3 1
1 3 1
9 1
4 6 9 4 2 4 10 2 23
8 1
4 6 9 4 2 4 10 2
 
*/