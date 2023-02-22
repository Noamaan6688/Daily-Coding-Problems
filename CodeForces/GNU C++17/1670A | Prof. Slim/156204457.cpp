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
    ll k,c=0;cin>>k;
    ll b[k];
    f(i,k)
    {
      cin>>b[i];
      if (b[i]<0) c+=1;
      b[i]=abs(b[i]);
    }
    f(i,c) b[i]=-(b[i]);
    if (is_sorted(b,b+k)) cout<<"YES\n";
    else cout<<"NO\n";
  }
 
  return 0;
}
/*
4
7
7 3 2 -11 -13 -17 -23
6
4 10 25 47 71 96
6
71 -35 7 -4 -11 -25
6
-45 9 -48 -67 -55 7
 
*/