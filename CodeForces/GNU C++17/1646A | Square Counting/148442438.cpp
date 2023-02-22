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
  ll r;cin>>r;while (r--)
  {
    ll p,q;cin>>p>>q;
    p*=p;
    cout<<(q/p)<<"\n";
  }
 
  return 0;
}
/*
4
7 0
1 1
2 12
3 12
 
*/