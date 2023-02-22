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
  f(i,k)
  {
    cin>>b[i];
    if (b[i]==1) d+=1;
  }
  int j=k-1;
  while (d--)
  {
    if (b[j]==0) c+=1;
    j-=1;
  }
  cout<<c<<"\n";
 
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
8
0 0 1 1 1 1 1 1
5
1 0 0 1 1
2
1 0
11
1 1 0 0 1 0 0 1 1 1 0
 
*/