// Hi
#include <bits/stdc++.h>
#define f(i, n) for (ll i = 0; i < n; i++)
#define f1(i, n) for (ll i = 1; i <= n; i++)
#define fn(i, j, k) for (ll i = j; i <= k; i++)
#define flash ios_base::sync_with_stdio(0);cin.tie(0);
#define ll unsigned long long int
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
    if (k==1)
    {
      if (b[0]==1) cout<<"YES\n";
      else cout<<"NO\n";
    }  
    else
    {
      sort(b,b+k);
      if ((b[k-1]-b[k-2])>1) cout<<"NO\n";
      else cout<<"YES\n";
    }  
  }
 
  return 0;
}
/*
6
2
2 3
1
2
5
1 6 2 4 3
4
2 2 2 1
3
1 1000000000 999999999
1
1
 
*/