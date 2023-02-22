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
  int a,b,c;cin>>a>>b>>c;
  if (a==b && a==c && b==c) cout<<"Yes\n";
  else if ((a-1)>(b+c)) cout<<"Yes\n";
  else cout<<"No\n";
  // if ((b+c)<=(a-2) || (a==b==c)) cout<<"Yes\n";
  // else cout<<"No\n";
 
 
 
 
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
4
1 1 1
2 1 2
3 1 1
4 1 1
 
*/