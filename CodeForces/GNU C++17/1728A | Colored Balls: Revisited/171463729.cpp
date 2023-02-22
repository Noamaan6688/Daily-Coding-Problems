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
  int k,c=0,d=0;cin>>k;
  int b[k];
  f(i,k) cin>>b[i];
  f(i,k)
  {
    if (b[i]>d) d=b[i],c=i;
  }
  cout<<c+1<<"\n";
 
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
4
3
1 1 1
1
9
2
4 7
4
1 4 3 3
 
*/