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
    ll k,c=0,s=0;cin>>k;
    ll b[k];
    f(i,k) cin>>b[i];
    f(i,k) s+=b[i],c=max(c,b[i]);
    if (s) cout<<max(1ll,(2*c)-s)<<"\n";
    else cout<<"0\n";
  }
 
  return 0;
}
/*
4
4
2 3 3 2
3
1 5 2
2
0 0
4
1000000000 1000000000 1000000000 1000000000
 
*/