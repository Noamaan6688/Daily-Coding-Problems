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
    if (b[k-2]<=b[k-1] && b[k-1]>=0)
    {
      cout<<k-2<<"\n";
      f(i,k-2) cout<<i+1<<" "<<k-1<<" "<<k<<"\n";
    }
    else if (is_sorted(b,b+k)) cout<<"0\n";
    else cout<<"-1\n";
  }
 
  return 0;
}
/*
3
5
5 -4 2 -1 2
3
4 3 2
3
-3 -2 -1
 
*/