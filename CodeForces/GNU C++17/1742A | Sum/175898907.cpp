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
  int x,y,z;cin>>x>>y>>z;
  if (x==(y+z) || y==(x+z) || z==(x+y)) cout<<"YES\n";
  else cout<<"NO\n";
 
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
7
1 4 3
2 5 8
9 11 20
0 0 0
20 20 20
4 12 3
15 7 8
 
 
*/