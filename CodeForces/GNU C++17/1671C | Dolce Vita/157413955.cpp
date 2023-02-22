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
    ll p,q,c=0,s=0;cin>>p>>q;
    ll b[p];
    f(i,p) cin>>b[i];
    sort(b,b+p);
    f(i,p)
    {
      s+=b[i];
      if ((q-s)>=0) c+=(q-s)/(i+1)+1;
    }
    cout<<c<<"\n";
  }
 
  return 0;
}
/*
4
3 7
2 1 2
5 9
10 20 30 40 50
1 1
1
2 1000
1 1
 
*/