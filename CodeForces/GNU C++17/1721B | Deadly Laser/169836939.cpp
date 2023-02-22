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
  int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
  if (((c-e)<=1) && ((d-e)<=1)) cout<<"-1\n";
  else if (((c+e)>=a) && ((d+e)>=b)) cout<<"-1\n";
  else if (((c+e)>=a) && ((c-e)<=1)) cout<<"-1\n";
  else if (((d-e)<=1) && ((d+e)>=b)) cout<<"-1\n";
  else cout<<(b-1)+(a-1)<<"\n";
 
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
3
2 3 1 3 0
2 3 1 3 1
5 5 3 4 1
 
*/