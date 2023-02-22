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
    ll k,c1=1,c2=1;cin>>k;
    ll b[k];
    f(i,k) cin>>b[i];
    sort(b,b+k);
    if (b[0]==1) c1=0;
    f1(i,k-1)
    {
      if (b[i]==1) c1=0;
      if (b[i]==(b[i-1]+1)) c2=0;
    }
    if (!c1 && !c2) cout<<"NO\n";
    else cout<<"YES\n";
  }
 
  return 0;
}
/*
4
4
2 5 6 8
3
1 1 1
5
4 1 7 0 8
4
5 9 17 5
 
*/