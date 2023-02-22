// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define MOD 1000000007
 
using namespace std;
 
int main()
{
  flash
  int r;cin>>r;while (r--)
  {
    ll k,c=1;cin>>k;
    ll b[k+1];
    f(i,k) cin>>b[i];b[k]=-1;
    f(i,k)
    {
      if (b[i]!=b[i-1] && b[i]!=b[i+1]) c=0;
    }
    if (c==0) cout<<"-1\n";
    else
    {
      int d=1;
      f(i,k)
      {
        if (b[i]!=b[i+1]) cout<<d<<" ",d=i+2;
        else cout<<i+2<<" ";
      }
      cout<<"\n";
    }
  }
 
  return 0;
}
/*
2
5
1 1 1 1 1
6
3 6 8 13 15 21
 
*/