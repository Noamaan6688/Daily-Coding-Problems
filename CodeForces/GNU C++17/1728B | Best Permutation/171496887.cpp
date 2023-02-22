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
  int k;cin>>k;
  if (k%2==0) for (int i=k-2;i>0;i-=1) cout<<i<<" ";
  else
  {
      cout<<k-3<<" "<<k-2<<" ";
      for (int i=k-4;i>0;i-=1) cout<<i<<" ";
  }
  cout<<k-1<<" "<<k<<"\n";
 
 
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
4
5
6
12
156
 
 
2 1 3 4
1 2 3 4 5
4 5 1 2 3 6
 
*/