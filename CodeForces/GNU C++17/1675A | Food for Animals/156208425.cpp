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
    ll a,b,c,d,e;cin>>a>>b>>c>>d>>e;
    bool t=false;
    if (a>=d && b>=e) t=true;
    else
    {
      ll s=0;
      if ((d-a)>0) s+=d-a;
      if ((e-b)>0) s+=e-b;
      if (s<=c) t=true;
    }
    if (t) cout<<"YES\n";
    else cout<<"NO\n";
  }
 
  return 0;
}
/*
7
1 1 4 2 3
0 0 0 0 0
5 5 0 4 6
1 1 1 1 1
50000000 50000000 100000000 100000000 100000000
0 0 0 100000000 100000000
1 3 2 2 5
 
*/