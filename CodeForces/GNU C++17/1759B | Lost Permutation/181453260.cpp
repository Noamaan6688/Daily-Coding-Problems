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
  int p,q,c=1,d=1,s=0;cin>>p>>q;
  int b[p];
  f(i,p) cin>>b[i],s+=b[i];
  sort(b,b+p);
  f(i,p)
  {
    while (b[i]!=d)
    {
      q-=d;
      d+=1;
      // cout<<q<<" "<<d<<"\n";
      if (q<0) break;
    }
    d+=1;
    if (q<0)
    {
      c=0;break;
    }
  }
  // cout<<d<<"\n";
  while (q>0)
  {
    q-=d;d+=1;
  }
  if (q<0) c=0;
  if (c) cout<<"YES\n";
  else cout<<"NO\n";
 
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
3 13
3 1 4
1 1
1
3 3
1 4 2
2 1
4 3
5 6
1 2 3 4 5
 
*/