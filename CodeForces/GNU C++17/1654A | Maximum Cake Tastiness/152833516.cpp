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
    cout<<b[k-1]+b[k-2]<<"\n";
  }
 
  return 0;
}
/*
5
6
5 2 1 4 7 3
3
32 78 78
3
69 54 91
8
999021 999021 999021 999021 999652 999021 999021 999021
2
1000000000 1000000000
 
*/