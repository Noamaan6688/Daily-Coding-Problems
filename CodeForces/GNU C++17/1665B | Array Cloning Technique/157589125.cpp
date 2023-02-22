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
    ll k,c=0,d=0;cin>>k;
    map<ll,ll>mp;
    f(i,k)
    {
      ll n;cin>>n;
      mp[n]++;
      d=max(d,mp[n]);
    }
    c=k-d;
    while (d<k)
    {
      d*=2;
      c+=1;
    }
    cout<<c<<"\n";
  }
 
  return 0;
}
/*
6
1
1789
6
0 1 3 3 7 0
2
-1000000000 1000000000
4
4 3 2 1
5
2 5 7 6 3
7
1 1 1 1 1 1 1
 
*/