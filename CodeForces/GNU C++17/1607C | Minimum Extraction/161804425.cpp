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
    ll k;cin>>k;
    ll b[k];
  f(i,k) cin>>b[i];
  sort(b,b+k);
    ll c=b[0];
  f1(i,k-1) c=max(c,b[i]-b[i-1]);
  cout<<c<<"\n";
  }
 
  return 0;
}
/*
8
1
10
2
0 0
3
-1 2 0
4
2 10 1 7
2
2 3
5
3 2 -4 -2 0
2
-1 1
1
-2
 
*/