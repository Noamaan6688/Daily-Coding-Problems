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
  if (k==3 || k<=1) cout<<"-1\n";
  else
  {
    if (k%2)
    {
      int c=k;
      for (int i=0;i<k/2;i+=1) cout<<c--<<" ";
      for (int i=1;i<=c;i+=1) cout<<i<<" ";cout<<"\n";
    }
    else
    {
      for (int i=k;i>0;i-=1) cout<<i<<" ";cout<<"\n";
    }
  }
 
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
3
7
5
2
 
*/